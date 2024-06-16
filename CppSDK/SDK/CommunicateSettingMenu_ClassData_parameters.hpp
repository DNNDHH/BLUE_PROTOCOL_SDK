#pragma once

 

// Package: CommunicateSettingMenu_ClassData

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"


namespace SDK::Params
{

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ClickedBtnAwardIconItemList__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature final
{
public:
	int32                                         AwardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature) == 0x000004, "Wrong alignment on CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature) == 0x000004, "Wrong size on CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature, AwardId) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_ClickedBtnAwardIconItemList__DelegateSignature::AwardId' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.ExecuteUbergraph_CommunicateSettingMenu_ClassData
// 0x0098 (0x0098 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  K2Node_CustomEvent_InClassType_1;                  // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5432[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_InClassLevel;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5433[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList_1;                // 0x0010(0x0010)(ConstParm, ReferenceParm)
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0020(0x0018)()
	ESBClassType                                  K2Node_CustomEvent_InClassType;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5434[0x7];                                     // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardIdList;                  // 0x0040(0x0010)(ConstParm, ReferenceParm)
	class FString                                 CallFunc_GetClassNameText_ReturnValue;             // 0x0050(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0060(0x0018)()
	int32                                         K2Node_ComponentBoundEvent_AwardId;                // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5435[0x4];                                     // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 K2Node_CustomEvent_InAwardId;                      // 0x0080(0x0010)(ConstParm, ReferenceParm)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData) == 0x000098, "Wrong size on CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, EntryPoint) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::EntryPoint' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InClassType_1) == 0x000004, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InClassType_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InClassLevel) == 0x000008, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InClassLevel' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InAwardIdList_1) == 0x000010, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InAwardIdList_1' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, CallFunc_Conv_IntToText_ReturnValue) == 0x000020, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InClassType) == 0x000038, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InAwardIdList) == 0x000040, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InAwardIdList' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, CallFunc_GetClassNameText_ReturnValue) == 0x000050, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::CallFunc_GetClassNameText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, CallFunc_Conv_StringToText_ReturnValue) == 0x000060, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_ComponentBoundEvent_AwardId) == 0x000078, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_ComponentBoundEvent_AwardId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_InAwardId) == 0x000080, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_InAwardId' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData, K2Node_CustomEvent_IsEnable) == 0x000090, "Member 'CommunicateSettingMenu_ClassData_C_ExecuteUbergraph_CommunicateSettingMenu_ClassData::K2Node_CustomEvent_IsEnable' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetBtnEnable
// 0x0001 (0x0001 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_SetBtnEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_SetBtnEnable) == 0x000001, "Wrong alignment on CommunicateSettingMenu_ClassData_C_SetBtnEnable");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_SetBtnEnable) == 0x000001, "Wrong size on CommunicateSettingMenu_ClassData_C_SetBtnEnable");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetBtnEnable, IsEnable) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_SetBtnEnable::IsEnable' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetAwardId
// 0x0010 (0x0010 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_SetAwardId final
{
public:
	TArray<int32>                                 InAwardId;                                         // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_SetAwardId) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ClassData_C_SetAwardId");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_SetAwardId) == 0x000010, "Wrong size on CommunicateSettingMenu_ClassData_C_SetAwardId");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetAwardId, InAwardId) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_SetAwardId::InAwardId' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature final
{
public:
	int32                                         AwardId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature) == 0x000004, "Wrong alignment on CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature) == 0x000004, "Wrong size on CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature, AwardId) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_BndEvt__CommunicateSettingMenu_ClassData_AwardIconItemList_K2Node_ComponentBoundEvent_0_ClickedBtnAwardItemIcon__DelegateSignature::AwardId' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetClassIconAndName
// 0x0018 (0x0018 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_SetClassIconAndName final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5436[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 InAwardIdList;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_SetClassIconAndName) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ClassData_C_SetClassIconAndName");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_SetClassIconAndName) == 0x000018, "Wrong size on CommunicateSettingMenu_ClassData_C_SetClassIconAndName");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetClassIconAndName, InClassType) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_SetClassIconAndName::InClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetClassIconAndName, InAwardIdList) == 0x000008, "Member 'CommunicateSettingMenu_ClassData_C_SetClassIconAndName::InAwardIdList' has a wrong offset!");

// Function CommunicateSettingMenu_ClassData.CommunicateSettingMenu_ClassData_C.SetData
// 0x0018 (0x0018 - 0x0000)
struct CommunicateSettingMenu_ClassData_C_SetData final
{
public:
	ESBClassType                                  InClassType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5437[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                 InAwardIdList;                                     // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(CommunicateSettingMenu_ClassData_C_SetData) == 0x000008, "Wrong alignment on CommunicateSettingMenu_ClassData_C_SetData");
static_assert(sizeof(CommunicateSettingMenu_ClassData_C_SetData) == 0x000018, "Wrong size on CommunicateSettingMenu_ClassData_C_SetData");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetData, InClassType) == 0x000000, "Member 'CommunicateSettingMenu_ClassData_C_SetData::InClassType' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetData, InClassLevel) == 0x000004, "Member 'CommunicateSettingMenu_ClassData_C_SetData::InClassLevel' has a wrong offset!");
static_assert(offsetof(CommunicateSettingMenu_ClassData_C_SetData, InAwardIdList) == 0x000008, "Member 'CommunicateSettingMenu_ClassData_C_SetData::InAwardIdList' has a wrong offset!");

}

