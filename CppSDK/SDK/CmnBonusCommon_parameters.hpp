#pragma once

 

// Package: CmnBonusCommon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function CmnBonusCommon.CmnBonusCommon_C.UpdateStackB
// 0x01A8 (0x01A8 - 0x0000)
struct CmnBonusCommon_C_UpdateStackB final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBRewardBoostStackBItemType                  InItemType;                                        // 0x0118(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  ItemType;                                          // 0x0119(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D89[0x5];                                     // 0x011B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBStackBMasterData                    CallFunc_FindStackBMasterData_ReturnValue;         // 0x0120(0x0030)()
	ESBRewardBoostStackBItemType                  CallFunc_GetStackBItemType_ReturnValue;            // 0x0150(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D8A[0x3];                                     // 0x0151(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0154(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0158(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0159(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D8B[0x6];                                     // 0x015A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D8C[0x7];                                     // 0x0169(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_RewardBoostTooltip_C*              CallFunc_Create_ReturnValue;                       // 0x0170(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    CallFunc_GetSBPlayerController_ReturnValue;        // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D8D[0x7];                                     // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerRewardBoostComponent*          CallFunc_GetRewardBoostComponent_ReturnValue;      // 0x0188(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBRewardBoostTooltipData>      CallFunc_GetStackBToolTipText_TooltipDataList;     // 0x0190(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsEffectiveStackB_ReturnValue;            // 0x01A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x01A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBonusCommon_C_UpdateStackB) == 0x000008, "Wrong alignment on CmnBonusCommon_C_UpdateStackB");
static_assert(sizeof(CmnBonusCommon_C_UpdateStackB) == 0x0001A8, "Wrong size on CmnBonusCommon_C_UpdateStackB");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, OwnItemInfo) == 0x000000, "Member 'CmnBonusCommon_C_UpdateStackB::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, InItemType) == 0x000118, "Member 'CmnBonusCommon_C_UpdateStackB::InItemType' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, ItemType) == 0x000119, "Member 'CmnBonusCommon_C_UpdateStackB::ItemType' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00011A, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_FindStackBMasterData_ReturnValue) == 0x000120, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_FindStackBMasterData_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetStackBItemType_ReturnValue) == 0x000150, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetStackBItemType_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetStackBNum_ReturnValue) == 0x000154, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_MakeLiteralByte_ReturnValue) == 0x000158, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000159, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetOwningPlayer_ReturnValue) == 0x000160, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, Temp_bool_Variable) == 0x000168, "Member 'CmnBonusCommon_C_UpdateStackB::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_Create_ReturnValue) == 0x000170, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetSBPlayerController_ReturnValue) == 0x000178, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetSBPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_IsValid_ReturnValue) == 0x000180, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetRewardBoostComponent_ReturnValue) == 0x000188, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetRewardBoostComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_GetStackBToolTipText_TooltipDataList) == 0x000190, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_GetStackBToolTipText_TooltipDataList' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, CallFunc_IsEffectiveStackB_ReturnValue) == 0x0001A0, "Member 'CmnBonusCommon_C_UpdateStackB::CallFunc_IsEffectiveStackB_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_UpdateStackB, K2Node_Select_Default) == 0x0001A1, "Member 'CmnBonusCommon_C_UpdateStackB::K2Node_Select_Default' has a wrong offset!");

// Function CmnBonusCommon.CmnBonusCommon_C.GetStackBItemType
// 0x0220 (0x0220 - 0x0000)
struct CmnBonusCommon_C_GetStackBItemType final
{
public:
	struct FOwnItemInfo                           OwnItemInfo;                                       // 0x0000(0x0118)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ESBRewardBoostStackBItemType                  ReturnValue;                                       // 0x0118(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable;                                // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D8E[0x4];                                     // 0x011C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0120(0x00B0)()
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_1;                              // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_2;                              // 0x01D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_3;                              // 0x01D2(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_4;                              // 0x01D3(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_5;                              // 0x01D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_6;                              // 0x01D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBImagineCategoryType                        Temp_byte_Variable_7;                              // 0x01D6(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_8;                              // 0x01D7(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_9;                              // 0x01D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  Temp_byte_Variable_10;                             // 0x01D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  K2Node_Select_Default;                             // 0x01DA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D8F[0x5];                                     // 0x01DB(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class AActor*>                         K2Node_MakeArray_Array;                            // 0x01E0(0x0010)(ReferenceParm)
	class AActor*                                 CallFunc_Array_Get_Item;                           // 0x01F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        CallFunc_K2_GetRootComponent_ReturnValue;          // 0x01F8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0200(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6D90[0x7];                                     // 0x0201(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetDisplayName_ReturnValue;               // 0x0208(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	EItemType                                     Temp_byte_Variable_11;                             // 0x0218(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardBoostStackBItemType                  K2Node_Select_Default_1;                           // 0x0219(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CmnBonusCommon_C_GetStackBItemType) == 0x000008, "Wrong alignment on CmnBonusCommon_C_GetStackBItemType");
static_assert(sizeof(CmnBonusCommon_C_GetStackBItemType) == 0x000220, "Wrong size on CmnBonusCommon_C_GetStackBItemType");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, OwnItemInfo) == 0x000000, "Member 'CmnBonusCommon_C_GetStackBItemType::OwnItemInfo' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, ReturnValue) == 0x000118, "Member 'CmnBonusCommon_C_GetStackBItemType::ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable) == 0x000119, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00011A, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_FindImagineMaster_bIsValid) == 0x00011B, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_FindImagineMaster_ImagineMaster) == 0x000120, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_1) == 0x0001D0, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_2) == 0x0001D1, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_3) == 0x0001D2, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_4) == 0x0001D3, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_4' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_5) == 0x0001D4, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_5' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_6) == 0x0001D5, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_6' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_7) == 0x0001D6, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_7' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_8) == 0x0001D7, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_8' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_9) == 0x0001D8, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_9' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_10) == 0x0001D9, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_10' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, K2Node_Select_Default) == 0x0001DA, "Member 'CmnBonusCommon_C_GetStackBItemType::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, K2Node_MakeArray_Array) == 0x0001E0, "Member 'CmnBonusCommon_C_GetStackBItemType::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_Array_Get_Item) == 0x0001F0, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_K2_GetRootComponent_ReturnValue) == 0x0001F8, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_K2_GetRootComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_IsEmpty_ReturnValue) == 0x000200, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, CallFunc_GetDisplayName_ReturnValue) == 0x000208, "Member 'CmnBonusCommon_C_GetStackBItemType::CallFunc_GetDisplayName_ReturnValue' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, Temp_byte_Variable_11) == 0x000218, "Member 'CmnBonusCommon_C_GetStackBItemType::Temp_byte_Variable_11' has a wrong offset!");
static_assert(offsetof(CmnBonusCommon_C_GetStackBItemType, K2Node_Select_Default_1) == 0x000219, "Member 'CmnBonusCommon_C_GetStackBItemType::K2Node_Select_Default_1' has a wrong offset!");

}

