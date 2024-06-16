#pragma once

 

// Package: PlayerGaugeBagCapacity

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.ExecuteUbergraph_PlayerGaugeBagCapacity
// 0x0068 (0x0068 - 0x0000)
struct PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(int32 InRetCode, TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	bool                                          CallFunc_GetNetworkDataCache_IsValid;              // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FBC[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBNetworkDataCache*                    CallFunc_GetNetworkDataCache_ReturnValue;          // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemList*                         CallFunc_GetOwnItemList_ReturnValue;               // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FBD[0x7];                                     // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerLiquidMemoryComponent*         CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue; // 0x0048(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_InRetCode;                      // 0x0050(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FBE[0x4];                                     // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            K2Node_CustomEvent_InUpdatedLiquidMemoryInfos;     // 0x0058(0x0010)(ConstParm, ReferenceParm)
};
static_assert(alignof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity) == 0x000008, "Wrong alignment on PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity");
static_assert(sizeof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity) == 0x000068, "Wrong size on PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, EntryPoint) == 0x000000, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::EntryPoint' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_GetNetworkDataCache_IsValid) == 0x000024, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_GetNetworkDataCache_IsValid' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_GetNetworkDataCache_ReturnValue) == 0x000028, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_GetNetworkDataCache_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_GetOwnItemList_ReturnValue) == 0x000030, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_GetOwnItemList_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_GetSBPlayerController_ReturnValue) == 0x000038, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue) == 0x000048, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::CallFunc_GetPlayerLiquidMemoryComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, K2Node_CustomEvent_InRetCode) == 0x000050, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::K2Node_CustomEvent_InRetCode' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity, K2Node_CustomEvent_InUpdatedLiquidMemoryInfos) == 0x000058, "Member 'PlayerGaugeBagCapacity_C_ExecuteUbergraph_PlayerGaugeBagCapacity::K2Node_CustomEvent_InUpdatedLiquidMemoryInfos' has a wrong offset!");

// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.CustomEvent_0
// 0x0018 (0x0018 - 0x0000)
struct PlayerGaugeBagCapacity_C_CustomEvent_0 final
{
public:
	int32                                         InRetCode;                                         // 0x0000(0x0004)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FBF[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryInfo>            InUpdatedLiquidMemoryInfos;                        // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(PlayerGaugeBagCapacity_C_CustomEvent_0) == 0x000008, "Wrong alignment on PlayerGaugeBagCapacity_C_CustomEvent_0");
static_assert(sizeof(PlayerGaugeBagCapacity_C_CustomEvent_0) == 0x000018, "Wrong size on PlayerGaugeBagCapacity_C_CustomEvent_0");
static_assert(offsetof(PlayerGaugeBagCapacity_C_CustomEvent_0, InRetCode) == 0x000000, "Member 'PlayerGaugeBagCapacity_C_CustomEvent_0::InRetCode' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_CustomEvent_0, InUpdatedLiquidMemoryInfos) == 0x000008, "Member 'PlayerGaugeBagCapacity_C_CustomEvent_0::InUpdatedLiquidMemoryInfos' has a wrong offset!");

// Function PlayerGaugeBagCapacity.PlayerGaugeBagCapacity_C.Update_Internal
// 0x0150 (0x0150 - 0x0000)
struct PlayerGaugeBagCapacity_C_Update_Internal final
{
public:
	class USBOwnItemListContainer*                TmpInventory;                                      // 0x0000(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC0[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FC1[0x7];                                     // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue_1;             // 0x0030(0x0018)()
	bool                                          Temp_bool_Variable_1;                              // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC2[0x7];                                     // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0050(0x0028)()
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6FC3[0x7];                                     // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0080(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x00A8(0x0028)()
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC4[0x7];                                     // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_Select_Default_1;                           // 0x00D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0100(0x0028)()
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue;                 // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetIsBoostCapacity_ReturnValue;           // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC5[0x2];                                     // 0x0132(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetUseBlockNum_ReturnValue;               // 0x0134(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6FC6[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetInventory_ReturnValue_1;               // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetCapacity_ReturnValue;                  // 0x0148(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x014C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(PlayerGaugeBagCapacity_C_Update_Internal) == 0x000008, "Wrong alignment on PlayerGaugeBagCapacity_C_Update_Internal");
static_assert(sizeof(PlayerGaugeBagCapacity_C_Update_Internal) == 0x000150, "Wrong size on PlayerGaugeBagCapacity_C_Update_Internal");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, TmpInventory) == 0x000000, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::TmpInventory' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_MakeLiteralByte_ReturnValue) == 0x000008, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, Temp_bool_Variable) == 0x000009, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000028, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_Conv_IntToText_ReturnValue_1) == 0x000030, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_Conv_IntToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, Temp_bool_Variable_1) == 0x000048, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_MakeStruct_SlateColor) == 0x000050, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_Select_Default) == 0x000078, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_MakeStruct_SlateColor_1) == 0x000080, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_MakeStruct_SlateColor_2) == 0x0000A8, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x0000D0, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_Select_Default_1) == 0x0000D8, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, K2Node_MakeStruct_SlateColor_3) == 0x000100, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GetInventory_ReturnValue) == 0x000128, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GetInventory_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GetIsBoostCapacity_ReturnValue) == 0x000130, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GetIsBoostCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000131, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GetUseBlockNum_ReturnValue) == 0x000134, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GetUseBlockNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000138, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GetInventory_ReturnValue_1) == 0x000140, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GetInventory_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_GetCapacity_ReturnValue) == 0x000148, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_GetCapacity_ReturnValue' has a wrong offset!");
static_assert(offsetof(PlayerGaugeBagCapacity_C_Update_Internal, CallFunc_NotEqual_IntInt_ReturnValue_1) == 0x00014C, "Member 'PlayerGaugeBagCapacity_C_Update_Internal::CallFunc_NotEqual_IntInt_ReturnValue_1' has a wrong offset!");

}

