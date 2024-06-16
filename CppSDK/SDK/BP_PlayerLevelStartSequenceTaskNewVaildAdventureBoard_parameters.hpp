#pragma once

 

// Package: BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard

#include "Basic.hpp"


namespace SDK::Params
{

// Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard
// 0x00F8 (0x00F8 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 InRetCode)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_9157[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue_1;           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0038(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0050(0x0018)()
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9158[0x4];                                     // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetSBRetMessage_ReturnValue;              // 0x0078(0x0010)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       CallFunc_GetAdventureBoardComponent_ReturnValue;   // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0090(0x0018)()
	TArray<int32>                                 CallFunc_GetPopupNewValidBoardIdList_ReturnValue;  // 0x00A8(0x0010)(ConstParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9159[0x3];                                     // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x00BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_915A[0x7];                                     // 0x00C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 CallFunc_GetRankupAdventureBoardIdList_OutRankupBoardIdList; // 0x00C8(0x0010)(ReferenceParm)
	TArray<int32>                                 CallFunc_GetRankupAdventureBoardIdList_OutOtherBoardIdList; // 0x00D8(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00E8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x00EC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_2;             // 0x00F1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard) == 0x000008, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard) == 0x0000F8, "Wrong size on BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, EntryPoint) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetTextFromAsset_ReturnValue) == 0x000018, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetTextFromAsset_ReturnValue_1) == 0x000028, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetTextFromAsset_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Conv_StringToText_ReturnValue) == 0x000038, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000050, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, K2Node_CustomEvent_InRetCode) == 0x000068, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetSBPlayerController_ReturnValue) == 0x000070, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetSBRetMessage_ReturnValue) == 0x000078, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetSBRetMessage_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetAdventureBoardComponent_ReturnValue) == 0x000088, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetAdventureBoardComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000090, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetPopupNewValidBoardIdList_ReturnValue) == 0x0000A8, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetPopupNewValidBoardIdList_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x0000B8, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Array_Length_ReturnValue) == 0x0000BC, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Greater_IntInt_ReturnValue) == 0x0000C0, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetRankupAdventureBoardIdList_OutRankupBoardIdList) == 0x0000C8, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetRankupAdventureBoardIdList_OutRankupBoardIdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_GetRankupAdventureBoardIdList_OutOtherBoardIdList) == 0x0000D8, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_GetRankupAdventureBoardIdList_OutOtherBoardIdList' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Array_Length_ReturnValue_1) == 0x0000E8, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Array_Length_ReturnValue_2) == 0x0000EC, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Greater_IntInt_ReturnValue_1) == 0x0000F0, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard, CallFunc_Greater_IntInt_ReturnValue_2) == 0x0000F1, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_ExecuteUbergraph_BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard::CallFunc_Greater_IntInt_ReturnValue_2' has a wrong offset!");

// Function BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard.BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C.OnRankupCompleteDelegete_Event
// 0x0004 (0x0004 - 0x0000)
struct BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event) == 0x000004, "Wrong alignment on BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event");
static_assert(sizeof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event) == 0x000004, "Wrong size on BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event");
static_assert(offsetof(BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event, InRetCode) == 0x000000, "Member 'BP_PlayerLevelStartSequenceTaskNewVaildAdventureBoard_C_OnRankupCompleteDelegete_Event::InRetCode' has a wrong offset!");

}

