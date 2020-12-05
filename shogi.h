
#include <vector>

namespace SHOGI
{

  enum ORIGIN_TYPE
  {
    FU,
    KYOSHA,
    KEIMA,
    GIN,
    KIN,
    OU,
    HISYA,
    KAKU
  };
  enum MOVE_TYPE
  {
    FU,
    KYOSHA,
    KEIMA,
    GIN,
    KIN,
    OU,
    HISYA,
    KAKU,
    RYUOU,
    RYUUMA
  };

  enum AXIS_TYPE
  {
    OU,
    GYOKU
  }

  struct Koma
  {
    int id;
    ORIGIN_TYPE type;
    AXIS_TYPE axis;
    Position position;
    bool isStock false;
    bool nari false;
    
    MOVE_TYPE MoveType(){
    //ここに分岐書く
    } 
  };

  struct shogi
  {

  }
  
  
  struct Position
  {
    int x = 0;
    int y = 0;
    /* data */
  };

  struct Hand
  {
    Position from;
    Position to;
    Koma koma;
  };

  struct Player
  {
    Session* Session;
    AXIS_TYPE axis;
    string name;
    std::vector<Koma> units();
    
    
  };
  

  struct Session
  {
    std::vector<Hand> history();
    std::vector<Koma> komas();
    std::vector<Player> players();
    

  };

} // namespace SHOGI
