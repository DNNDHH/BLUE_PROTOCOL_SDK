#pragma once

 

// Package: UMG_SeasonPassMenuRewardItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_OnClick__DelegateSignature::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.ExecuteUbergraph_UMG_SeasonPassMenuRewardItem
// 0x0048 (0x0048 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D12[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterReward_bExists;                 // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D13[0x2];                                     // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x0014(0x0014)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable_1;                              // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSeasonPassRewardItemState                  Temp_byte_Variable;                                // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBSeasonPassRewardItemState                  Temp_byte_Variable_1;                              // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_2;            // 0x002E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_2;                              // 0x002F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class USBSeasonPassMenuRewardItemData*        K2Node_CustomEvent_Data;                           // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_3;            // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x003A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x003B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsMaxRankData_ReturnValue;                // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSeasonPassRewardItemState                  CallFunc_GetState_ReturnValue;                     // 0x003F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsShowSeasonPassDebugUi_ReturnValue;      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x0042(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0043(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsAchieved;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_CustomEvent_bIsMax;                         // 0x0045(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBSeasonPassRewardItemState                  K2Node_Select_Default_2;                           // 0x0046(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem) == 0x000048, "Wrong size on UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, EntryPoint) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::EntryPoint' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_ComponentBoundEvent_Sender) == 0x000008, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_MakeLiteralByte_ReturnValue) == 0x000010, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_FindMasterReward_bExists) == 0x000011, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_FindMasterReward_bExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_FindMasterReward_ReturnValue) == 0x000014, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, Temp_bool_Variable) == 0x000029, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, Temp_bool_Variable_1) == 0x00002A, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, Temp_byte_Variable) == 0x00002B, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, Temp_byte_Variable_1) == 0x00002C, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00002D, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_MakeLiteralByte_ReturnValue_2) == 0x00002E, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_MakeLiteralByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, Temp_bool_Variable_2) == 0x00002F, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::Temp_bool_Variable_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_CustomEvent_Data) == 0x000030, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_CustomEvent_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_MakeLiteralByte_ReturnValue_3) == 0x000038, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_MakeLiteralByte_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000039, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_IsValid_ReturnValue_1) == 0x00003A, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_Select_Default) == 0x00003B, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_IsValid_ReturnValue_2) == 0x00003C, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x00003D, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_IsMaxRankData_ReturnValue) == 0x00003E, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_IsMaxRankData_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_GetState_ReturnValue) == 0x00003F, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_GetState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_IsShowSeasonPassDebugUi_ReturnValue) == 0x000040, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_IsShowSeasonPassDebugUi_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_Event_IsDesignTime) == 0x000041, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_Select_Default_1) == 0x000042, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, CallFunc_BooleanAND_ReturnValue) == 0x000043, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_CustomEvent_bIsAchieved) == 0x000044, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_CustomEvent_bIsAchieved' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_CustomEvent_bIsMax) == 0x000045, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_CustomEvent_bIsMax' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem, K2Node_Select_Default_2) == 0x000046, "Member 'UMG_SeasonPassMenuRewardItem_C_ExecuteUbergraph_UMG_SeasonPassMenuRewardItem::K2Node_Select_Default_2' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_BndEvt__UMG_SeasonPassMenuRewardItem_CommonIcon_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.DesignCheck
// 0x0002 (0x0002 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_DesignCheck final
{
public:
	bool                                          bIsAchieved;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Param_bIsMax;                                      // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_DesignCheck) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_DesignCheck");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_DesignCheck) == 0x000002, "Wrong size on UMG_SeasonPassMenuRewardItem_C_DesignCheck");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_DesignCheck, bIsAchieved) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_DesignCheck::bIsAchieved' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_DesignCheck, Param_bIsMax) == 0x000001, "Member 'UMG_SeasonPassMenuRewardItem_C_DesignCheck::Param_bIsMax' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_PreConstruct) == 0x000001, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_PreConstruct");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_PreConstruct) == 0x000001, "Wrong size on UMG_SeasonPassMenuRewardItem_C_PreConstruct");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.SetData
// 0x0008 (0x0008 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_SetData final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_SetData) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_SetData");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_SetData) == 0x000008, "Wrong size on UMG_SeasonPassMenuRewardItem_C_SetData");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetData, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_SetData::Param_Data' has a wrong offset!");

// Function UMG_SeasonPassMenuRewardItem.UMG_SeasonPassMenuRewardItem_C.SetDebugText
// 0x0240 (0x0240 - 0x0000)
struct UMG_SeasonPassMenuRewardItem_C_SetDebugText final
{
public:
	class USBSeasonPassMenuRewardItemData*        Param_Data;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 ItemTypeString;                                    // 0x0008(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0040(0x0040)(HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x0080(0x0018)()
	bool                                          CallFunc_FindMasterReward_bExists;                 // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8D14[0x3];                                     // 0x0099(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterReward                        CallFunc_FindMasterReward_ReturnValue;             // 0x009C(0x0014)(NoDestructor)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0100(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_2;          // 0x0128(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0140(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_2;            // 0x0150(0x0040)(HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0190(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x01A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_3;          // 0x01B0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_3;            // 0x01C8(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array_1;                          // 0x0208(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue_1;                     // 0x0218(0x0018)()
	class FString                                 CallFunc_Replace_ReturnValue;                      // 0x0230(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UMG_SeasonPassMenuRewardItem_C_SetDebugText) == 0x000008, "Wrong alignment on UMG_SeasonPassMenuRewardItem_C_SetDebugText");
static_assert(sizeof(UMG_SeasonPassMenuRewardItem_C_SetDebugText) == 0x000240, "Wrong size on UMG_SeasonPassMenuRewardItem_C_SetDebugText");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, Param_Data) == 0x000000, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::Param_Data' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, ItemTypeString) == 0x000008, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::ItemTypeString' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_NameToString_ReturnValue) == 0x000030, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeStruct_FormatArgumentData) == 0x000040, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_StringToText_ReturnValue_1) == 0x000080, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_FindMasterReward_bExists) == 0x000098, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_FindMasterReward_bExists' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_FindMasterReward_ReturnValue) == 0x00009C, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_FindMasterReward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeArray_Array) == 0x0000F0, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_IntToString_ReturnValue) == 0x000100, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Format_ReturnValue) == 0x000110, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_StringToText_ReturnValue_2) == 0x000128, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_StringToText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_TextToString_ReturnValue) == 0x000140, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeStruct_FormatArgumentData_2) == 0x000150, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeStruct_FormatArgumentData_2' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000190, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x0001A0, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Conv_StringToText_ReturnValue_3) == 0x0001B0, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Conv_StringToText_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeStruct_FormatArgumentData_3) == 0x0001C8, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeStruct_FormatArgumentData_3' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, K2Node_MakeArray_Array_1) == 0x000208, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::K2Node_MakeArray_Array_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Format_ReturnValue_1) == 0x000218, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Format_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UMG_SeasonPassMenuRewardItem_C_SetDebugText, CallFunc_Replace_ReturnValue) == 0x000230, "Member 'UMG_SeasonPassMenuRewardItem_C_SetDebugText::CallFunc_Replace_ReturnValue' has a wrong offset!");

}

