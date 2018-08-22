
#Add it after possible moves line in checkOurPlayerinDanger method
if(g_master_grid[danger_position_x][danger_position_y].placedBy == g_opp_player)
{
  //SET first priority value ->8
                             ->9
                             ->1.5
                             ->10(need to change predictive_danger_count > 1)
                               
  //SET for all the movements
 //old code 
}
//Add this line before declaration of int final priority = 0;
else{
  if(possible_moves  & down && isAlive)
  {
    PlayerMove[0] = CLI_DIR_DOWN;
    if(!g_master_grid[danger_position_x+1][danger_position_y].is_explode_danger)
      {
      priority[0] = 11;
      
      if(g_master_grid[danger_position_x+1][danger_position_y].predictive_danger_count == 0)
      {
      priority[0] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[0] = 12;
      bombstatus[0] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[0] = 13;
      bombstatus[0] = 1;
    }
  }
  
   if(possible_moves  & up && isAlive)
  {
    PlayerMove[1] = CLI_DIR_UP;
    if(!g_master_grid[danger_position_x-1][danger_position_y].is_explode_danger)
      {
      priority[1] = 11;
      
      if(g_master_grid[danger_position_x-1][danger_position_y].predictive_danger_count == 0)
      {
      priority[1] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[1] = 12;
      bombstatus[1] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[1] = 13;
      bombstatus[1] = 1;
    }
  }
  
   if(possible_moves  & right && isAlive)
  {
    PlayerMove[2] = CLI_DIR_RIGHT;
    if(!g_master_grid[danger_position_x][danger_position_y+1].is_explode_danger)
      {
      priority[2] = 11;
      
      if(g_master_grid[danger_position_x][danger_position_y+1].predictive_danger_count == 0)
      {
      priority[2] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[2] = 12;
      bombstatus[2] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[2] = 13;
      bombstatus[2] = 1;
    }
  }
  
   if(possible_moves  & left && isAlive)
  {
    PlayerMove[3] = CLI_DIR_LEFT;
    if(!g_master_grid[danger_position_x][danger_position_y-1].is_explode_danger)
      {
      priority[3] = 11;
      
      if(g_master_grid[danger_position_x][danger_position_y-1].predictive_danger_count == 0)
      {
      priority[3] = 11.5;
      }
      }
    
    if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 1 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[3] = 12;
      bombstatus[3] = 1;
    }
     if(g_master_grid[danger_position_x][danger_position_y].predictive_danger_count > 2 && 
       g_our_player_danger[danger_position_x][danger_position_y] == 0)
    {
      priority[3] = 13;
      bombstatus[3] = 1;
    }
  }
  
  void checkOurPlayerinPredicitivedanger()
  {
    //Old_code(FOR_DOWN)
     //SET Priority  -> 2
                     -> (Remove the condition)
                     -> 3
     //Add this condition
     if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0))
                     {
                       priority[0] = 4;
                       bombstatus[0] = 1;
                     }
      if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0))
                     {
                       priority[0] = 4.5;
                       bombstatus[0] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x+1][predictive_danger_pos_y].our_player_count <=1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x+1,predictive_danger_pos_y)>0))
                     {
                       priority[0] = 5;
                       bombstatus[0] = 1;
                     } 
       if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0) &&
         g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[0] = 5.5;
                       bombstatus[0] = 1;
                     }
    
        
       if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[0] = 6;
                       bombstatus[0] = 1;
                     } 
    
       if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x+1][predictive_danger_pos_y].our_player_count <= 1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x+1,predictive_danger_pos_y)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[0] = 7;
                       bombstatus[0] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[0] = 9;
                       bombstatus[0] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x+1,predictive_danger_pos_y,PlayerMove[0])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[0] = 9.5;
                       bombstatus[0] = 1;
                     } 
    if(g_master_grid[predictive_danger_pos_x+1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x+1][predictive_danger_pos_y].our_player_count <=1  &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x+1,predictive_danger_pos_y)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[0] = 10.5;
                       bombstatus[0] = 1;
                     }
    
    //For UP
    //SET Priority  -> 2
                     -> (Remove the condition)
                     -> 3
     //Add this condition
    if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0))
                     {
                       priority[1] = 4;
                       bombstatus[1] = 1;
                     }
      if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0))
                     {
                       priority[1] = 4.5;
                       bombstatus[1] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x-1][predictive_danger_pos_y].our_player_count <=1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x-1,predictive_danger_pos_y)>0))
                     {
                       priority[1] = 5;
                       bombstatus[1] = 1;
                     } 
       if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0) &&
         g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[1] = 5.5;
                       bombstatus[1] = 1;
                     }
    
        
       if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[1] = 6;
                       bombstatus[1] = 1;
                     } 
    
       if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x-1][predictive_danger_pos_y].our_player_count <= 1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x-1,predictive_danger_pos_y)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[1] = 7;
                       bombstatus[1] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[1] = 9;
                       bombstatus[1] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x-1,predictive_danger_pos_y,PlayerMove[1])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[1] = 9.5;
                       bombstatus[1] = 1;
                     } 
    if(g_master_grid[predictive_danger_pos_x-1][predictive_danger_pos_y].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x-1][predictive_danger_pos_y].our_player_count <=1  &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x-1,predictive_danger_pos_y)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[1] = 10.5;
                       bombstatus[1] = 1;
                     }
    
    //For RIGHT
    //SET Priority  -> 2
                     -> (Remove the condition)
                     -> 3
     //Add this condition
    if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0))
                     {
                       priority[2] = 4;
                       bombstatus[2] = 1;
                     }
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0))
                     {
                       priority[2] = 4.5;
                       bombstatus[2] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y+1].our_player_count <=1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y+1)>0))
                     {
                       priority[2] = 5;
                       bombstatus[2] = 1;
                     } 
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0) &&
         g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[2] = 5.5;
                       bombstatus[2] = 1;
                     }
    
        
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[2] = 6;
                       bombstatus[2] = 1;
                     } 
    
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y+1].our_player_count <= 1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y+1)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[2] = 7;
                       bombstatus[2] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[2] = 9;
                       bombstatus[2] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y+1,PlayerMove[2])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[2] = 9.5;
                       bombstatus[2] = 1;
                     } 
    if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y+1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y+1].our_player_count <=1  &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y+1)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[2] = 10.5;
                       bombstatus[2] = 1;
                     }
    
     //For LEFT
    //SET Priority  -> 2
                     -> (Remove the condition)
                     -> 3
     //Add this condition
    if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0))
                     {
                       priority[3] = 4;
                       bombstatus[3] = 1;
                     }
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0))
                     {
                       priority[3] = 4.5;
                       bombstatus[3] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y-1].our_player_count <=1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y+1)>0))
                     {
                       priority[3] = 5;
                       bombstatus[3] = 1;
                     } 
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0) &&
         g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[3] = 5.5;
                       bombstatus[3] = 1;
                     }
    
        
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[3] = 6;
                       bombstatus[3] = 1;
                     } 
    
       if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y-1].our_player_count <= 1 &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y-1)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 1)
                     {
                       priority[3] = 7;
                       bombstatus[3] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[3] = 9;
                       bombstatus[3] = 1;
                     } 
    
      if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count == 0 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       (checkEscapePaththere(predictive_danger_pos_x,predictive_danger_pos_y-1,PlayerMove[3])>0) &&
        g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[3] = 9.5;
                       bombstatus[3] = 1;
                     } 
    if(g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y-1].predictive_danger_count > 1 &&
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y].our_player_count == 0 && 
       g_our_player_danger [predictive_danger_pos_x][predictive_danger_pos_y-1].our_player_count <=1  &&
       (checkpaththereforContinuosBombing(predictive_danger_pos_x,predictive_danger_pos_y-1)>0) &&
       g_master_grid[predictive_danger_pos_x][predictive_danger_pos_y].predictive_danger_count > 2)
                     {
                       priority[3] = 10.5;
                       bombstatus[3] = 1;
                     }
      
  }
 
  
      
      
      
   
