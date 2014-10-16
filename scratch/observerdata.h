
  typedef struct
  {
    uuid_t UUID;
    uint8_t ObserverDevice[6];
    uint8_t SeenDevice[6];
    uint32_t time;
  } ObserverData;

  ObserverData od = {
    .UUID = {0, 4, 3, 2, 4, 5},
    .ObserverDevice = NULL,
    .SeenDevice = NULL,
    .time = 0
  };


