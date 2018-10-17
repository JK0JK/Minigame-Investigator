Route127_EventObjects: @ 852C734
	object_event 1, EVENT_OBJ_GFX_SWIMMER_M, 0, 45, 42, 1, MOVEMENT_TYPE_FACE_LEFT_AND_RIGHT, 0, 0, 1, 2, Route127_EventScript_1F6A35, 0
	object_event 2, EVENT_OBJ_GFX_SWIMMER_F, 0, 18, 68, 1, MOVEMENT_TYPE_FACE_UP_LEFT_AND_RIGHT, 0, 0, 1, 4, Route127_EventScript_1F6A4C, 0
	object_event 3, EVENT_OBJ_GFX_ITEM_BALL, 0, 14, 6, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route127_EventScript_291032, 1034
	object_event 4, EVENT_OBJ_GFX_ITEM_BALL, 0, 64, 39, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route127_EventScript_29103F, 1035
	object_event 5, EVENT_OBJ_GFX_FISHERMAN, 0, 42, 21, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 1, 0, Route127_EventScript_1F6A63, 0
	object_event 6, EVENT_OBJ_GFX_FISHERMAN, 0, 64, 19, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 1, 0, Route127_EventScript_1F6A91, 0
	object_event 7, EVENT_OBJ_GFX_FISHERMAN, 0, 54, 14, 3, MOVEMENT_TYPE_FACE_UP, 1, 1, 1, 0, Route127_EventScript_1F6A7A, 0
	object_event 8, EVENT_OBJ_GFX_MAN_5, 0, 15, 23, 3, MOVEMENT_TYPE_FACE_LEFT, 1, 1, 1, 2, Route127_EventScript_1F6AA8, 0
	object_event 9, EVENT_OBJ_GFX_BLACK_BELT, 0, 63, 63, 3, MOVEMENT_TYPE_LOOK_AROUND, 1, 1, 1, 3, Route127_EventScript_1F6AD6, 0
	object_event 10, EVENT_OBJ_GFX_WOMAN_5, 0, 12, 23, 3, MOVEMENT_TYPE_FACE_RIGHT, 1, 1, 1, 2, Route127_EventScript_1F6ABF, 0
	object_event 11, EVENT_OBJ_GFX_ITEM_BALL, 0, 13, 20, 3, MOVEMENT_TYPE_LOOK_AROUND, 0, 0, 0, 0, Route127_EventScript_29104C, 1155

Route127_MapBGEvents: @ 852C83C
	bg_secret_base_event 59, 67, 0, SECRET_BASE_RED_CAVE4_1
	bg_secret_base_event 59, 72, 0, SECRET_BASE_YELLOW_CAVE3_2
	bg_secret_base_event 67, 63, 0, SECRET_BASE_YELLOW_CAVE4_1
	bg_secret_base_event 61, 21, 0, SECRET_BASE_YELLOW_CAVE3_3
	bg_secret_base_event 45, 24, 0, SECRET_BASE_YELLOW_CAVE1_3

Route127_MapEvents:: @ 852C878
	map_events Route127_EventObjects, 0x0, 0x0, Route127_MapBGEvents
