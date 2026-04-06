namespace hellmath {

// TODO: Task 1 - Define an `AccountStatus` enumeration to represent the four
// account types: `troll`, `guest`, `user`, and `mod`.
enum class AccountStatus{
    troll,
    guest,
    user,
    mod
};

enum class Action{
    read,
    write,
    remove
};

// TODO: Task 1 - Define an `Action` enumeration to represent the three
// permission types: `read`, `write`, and `remove`.

// TODO: Task 2 - Implement the `display_post` function, that gets two arguments
// of `AccountStatus` and returns a `bool`. The first argument is the status of
// the poster, the second one is the status of the viewer.
bool display_post(AccountStatus poster, AccountStatus viewer){
    bool show = true;
    if (poster == AccountStatus::troll && viewer == AccountStatus::troll){
        show = true;
    }
  else if (poster  == AccountStatus::troll){
        show = false;
    }
    else if ( viewer == AccountStatus::troll){
        show = false;
    }
    return show;
}

// TODO: Task 3 - Implement the `permission_check` function, that takes an
// `Action` as a first argument and an `AccountStatus` to check against. It
// should return a `bool`.
bool permission_check(Action action, AccountStatus account){
    bool permission = false;
     switch (account){
         case AccountStatus::troll :
         switch (action){
                 case Action::read: 
                 permission =  true;
                 break;
                 case Action::write: 
                 permission =  true;
                 break;
                 case Action::remove: 
                 permission =  false;
                 break;
                 default:
                 permission = false;
                 break;
             }break;
         case AccountStatus::guest :
             switch (action){
                 case Action::read: 
                 permission = true;
                 break;
                 case Action::write: 
                 permission = false;
                 break;
                 case Action::remove: 
                 permission =  false;
                 break;
                 default:
                 permission = false;
                 break;
                 }break;
         case AccountStatus::mod :
             switch (action){
                 case Action::read: 
                 permission =  true;
                 break;
                 case Action::write: 
                 permission =  true;
                 break;
                 case Action::remove: 
                 permission =  true;
                 break;
                 default:
                 permission = false;
                 break;
                 }break;
         case AccountStatus::user :
         switch (action){
                 case Action::read: 
                 permission =  true;
                 break;
                 case Action::write: 
                 permission =  true;
                 break;
                 case Action::remove: 
                 permission =  false;
                 break;
                 default:
                 permission = false;
                 break;
             }break;
         default:
             permission = false;
             break;
             
     } return permission;
}


// TODO: Task 4 - Implement the `valid_player_combination` function that
// checks if two players can join the same game. The function has two parameters
// of type `AccountStatus` and returns a `bool`.
bool valid_player_combination(AccountStatus account_1, AccountStatus account_2){
   bool valid = true;
    if (account_1 == AccountStatus::guest || account_2 == AccountStatus::guest){
        valid = false;
    }
    else if (account_1 == AccountStatus::troll && account_2 == AccountStatus::troll){
        valid = true;
}
    else if (account_1 == AccountStatus::troll || account_2 == AccountStatus::troll){
        valid = false;
    }
    return valid;
}

// TODO: Task 5 - Implement the `has_priority` function that takes two
// `AccountStatus` arguments and returns `true`, if and only if the first
// account has a strictly higher priority than the second.
bool has_priority(AccountStatus account_1,AccountStatus account_2){
bool priority = false;
if (account_1 == AccountStatus::mod && account_2 != AccountStatus::mod){
    priority = true;
}
    else if (account_1 == AccountStatus::user && account_2 != AccountStatus::mod && account_2 != AccountStatus::user){
        priority = true;
    }
 else if   (account_1 == AccountStatus::guest && account_2 == AccountStatus::troll){
    priority = true;
}
return  priority;
    }
}  // namespace hellmath