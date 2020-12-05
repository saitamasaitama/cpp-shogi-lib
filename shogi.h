
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

    /* data */
  };

  struct shogi
  {

  } struct Position
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
    AXIS_TYPE axis;
    
    /* data */
  };
  

  struct Session
  {
    std::vector<Hand> history();


  };

} // namespace SHOGI
