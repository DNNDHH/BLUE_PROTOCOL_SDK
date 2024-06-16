#pragma once

 

// Package: QuestRewardIcon

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function QuestRewardIcon.QuestRewardIcon_C.OnToggleCheck__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_OnToggleCheck__DelegateSignature final
{
public:
	bool                                          Param_IsCheck;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E26[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UQuestRewardIcon_C*                     Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_OnToggleCheck__DelegateSignature) == 0x000008, "Wrong alignment on QuestRewardIcon_C_OnToggleCheck__DelegateSignature");
static_assert(sizeof(QuestRewardIcon_C_OnToggleCheck__DelegateSignature) == 0x000010, "Wrong size on QuestRewardIcon_C_OnToggleCheck__DelegateSignature");
static_assert(offsetof(QuestRewardIcon_C_OnToggleCheck__DelegateSignature, Param_IsCheck) == 0x000000, "Member 'QuestRewardIcon_C_OnToggleCheck__DelegateSignature::Param_IsCheck' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_OnToggleCheck__DelegateSignature, Widget) == 0x000008, "Member 'QuestRewardIcon_C_OnToggleCheck__DelegateSignature::Widget' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_OnClick__DelegateSignature final
{
public:
	class UQuestRewardIcon_C*                     Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on QuestRewardIcon_C_OnClick__DelegateSignature");
static_assert(sizeof(QuestRewardIcon_C_OnClick__DelegateSignature) == 0x000008, "Wrong size on QuestRewardIcon_C_OnClick__DelegateSignature");
static_assert(offsetof(QuestRewardIcon_C_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'QuestRewardIcon_C_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.ExecuteUbergraph_QuestRewardIcon
// 0x0050 (0x0050 - 0x0000)
struct QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UUMG_ProductDetailMenu_C* Sender)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_6E27[0x4];                                     // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_Sender;                         // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_DetailWidget_1;                 // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               K2Node_CustomEvent_DetailWidget;                   // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0031(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E28[0x6];                                     // 0x0032(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIcon_C*                          K2Node_ComponentBoundEvent_Sender;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E29[0x6];                                     // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon) == 0x000008, "Wrong alignment on QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon");
static_assert(sizeof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon) == 0x000050, "Wrong size on QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, EntryPoint) == 0x000000, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::EntryPoint' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_CustomEvent_Sender) == 0x000018, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_CustomEvent_Sender' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_CustomEvent_DetailWidget_1) == 0x000020, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_CustomEvent_DetailWidget_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_CustomEvent_DetailWidget) == 0x000028, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_CustomEvent_DetailWidget' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, CallFunc_Not_PreBool_ReturnValue) == 0x000030, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, CallFunc_BooleanAND_ReturnValue) == 0x000031, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_ComponentBoundEvent_Sender) == 0x000038, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_ComponentBoundEvent_Sender' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, K2Node_Event_IsDesignTime) == 0x000040, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, CallFunc_GetUIManager_IsValid) == 0x000041, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon, CallFunc_GetUIManager_ReturnValue) == 0x000048, "Member 'QuestRewardIcon_C_ExecuteUbergraph_QuestRewardIcon::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct QuestRewardIcon_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_PreConstruct) == 0x000001, "Wrong alignment on QuestRewardIcon_C_PreConstruct");
static_assert(sizeof(QuestRewardIcon_C_PreConstruct) == 0x000001, "Wrong size on QuestRewardIcon_C_PreConstruct");
static_assert(offsetof(QuestRewardIcon_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'QuestRewardIcon_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature final
{
public:
	class UCommonIcon_C*                          Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong alignment on QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(sizeof(QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature) == 0x000008, "Wrong size on QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature");
static_assert(offsetof(QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature, Sender) == 0x000000, "Member 'QuestRewardIcon_C_BndEvt__QuestRewardIcon_Icon_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature::Sender' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.UnbindDetail
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_UnbindDetail final
{
public:
	class UUMG_ProductDetailMenu_C*               DetailWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_UnbindDetail) == 0x000008, "Wrong alignment on QuestRewardIcon_C_UnbindDetail");
static_assert(sizeof(QuestRewardIcon_C_UnbindDetail) == 0x000008, "Wrong size on QuestRewardIcon_C_UnbindDetail");
static_assert(offsetof(QuestRewardIcon_C_UnbindDetail, DetailWidget) == 0x000000, "Member 'QuestRewardIcon_C_UnbindDetail::DetailWidget' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.BindDetail
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_BindDetail final
{
public:
	class UUMG_ProductDetailMenu_C*               DetailWidget;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_BindDetail) == 0x000008, "Wrong alignment on QuestRewardIcon_C_BindDetail");
static_assert(sizeof(QuestRewardIcon_C_BindDetail) == 0x000008, "Wrong size on QuestRewardIcon_C_BindDetail");
static_assert(offsetof(QuestRewardIcon_C_BindDetail, DetailWidget) == 0x000000, "Member 'QuestRewardIcon_C_BindDetail::DetailWidget' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_CustomEvent final
{
public:
	class UUMG_ProductDetailMenu_C*               Sender;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_CustomEvent) == 0x000008, "Wrong alignment on QuestRewardIcon_C_CustomEvent");
static_assert(sizeof(QuestRewardIcon_C_CustomEvent) == 0x000008, "Wrong size on QuestRewardIcon_C_CustomEvent");
static_assert(offsetof(QuestRewardIcon_C_CustomEvent, Sender) == 0x000000, "Member 'QuestRewardIcon_C_CustomEvent::Sender' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMaster
// 0x002C (0x002C - 0x0000)
struct QuestRewardIcon_C_SetRewardMaster final
{
public:
	struct FSBMasterReward                        InMasterReward;                                    // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          IsUnidentified;                                    // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          OverwriteAmount;                                   // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2A[0x2];                                     // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         NewAmount;                                         // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMin;                                         // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMax;                                         // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2B[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_Select_Default;                             // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetRewardMaster) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetRewardMaster");
static_assert(sizeof(QuestRewardIcon_C_SetRewardMaster) == 0x00002C, "Wrong size on QuestRewardIcon_C_SetRewardMaster");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, InMasterReward) == 0x000000, "Member 'QuestRewardIcon_C_SetRewardMaster::InMasterReward' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, IsUnidentified) == 0x000014, "Member 'QuestRewardIcon_C_SetRewardMaster::IsUnidentified' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, OverwriteAmount) == 0x000015, "Member 'QuestRewardIcon_C_SetRewardMaster::OverwriteAmount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, NewAmount) == 0x000018, "Member 'QuestRewardIcon_C_SetRewardMaster::NewAmount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, AmountMin) == 0x00001C, "Member 'QuestRewardIcon_C_SetRewardMaster::AmountMin' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, AmountMax) == 0x000020, "Member 'QuestRewardIcon_C_SetRewardMaster::AmountMax' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, Temp_bool_Variable) == 0x000024, "Member 'QuestRewardIcon_C_SetRewardMaster::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMaster, K2Node_Select_Default) == 0x000028, "Member 'QuestRewardIcon_C_SetRewardMaster::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetupIcon
// 0x0030 (0x0030 - 0x0000)
struct QuestRewardIcon_C_SetupIcon final
{
public:
	ESBRewardItemType                             Param_RewardType;                                  // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E2C[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ID;                                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Value;                                             // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E2D[0x4];                                     // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Param_UniqueId;                                    // 0x0010(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          IsUnidentified;                                    // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsUseRewardLottery;                                // 0x0021(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E2E[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountMin;                                         // 0x0024(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMax;                                         // 0x0028(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetupIcon) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetupIcon");
static_assert(sizeof(QuestRewardIcon_C_SetupIcon) == 0x000030, "Wrong size on QuestRewardIcon_C_SetupIcon");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, Param_RewardType) == 0x000000, "Member 'QuestRewardIcon_C_SetupIcon::Param_RewardType' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, ID) == 0x000004, "Member 'QuestRewardIcon_C_SetupIcon::ID' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, Value) == 0x000008, "Member 'QuestRewardIcon_C_SetupIcon::Value' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, Param_UniqueId) == 0x000010, "Member 'QuestRewardIcon_C_SetupIcon::Param_UniqueId' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, IsUnidentified) == 0x000020, "Member 'QuestRewardIcon_C_SetupIcon::IsUnidentified' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, IsUseRewardLottery) == 0x000021, "Member 'QuestRewardIcon_C_SetupIcon::IsUseRewardLottery' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, AmountMin) == 0x000024, "Member 'QuestRewardIcon_C_SetupIcon::AmountMin' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, AmountMax) == 0x000028, "Member 'QuestRewardIcon_C_SetupIcon::AmountMax' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetupIcon, K2Node_SwitchEnum_CmpSuccess) == 0x00002C, "Member 'QuestRewardIcon_C_SetupIcon::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardIcon
// 0x0020 (0x0020 - 0x0000)
struct QuestRewardIcon_C_SetRewardIcon final
{
public:
	class UCommonIcon_C*                          Self2;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBRewardItemType                             InRewardType;                                      // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E2F[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InId;                                              // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bUseRewardLottery;                                 // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E30[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountRangeMin;                                    // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountRangeMax;                                    // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetRewardIcon) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetRewardIcon");
static_assert(sizeof(QuestRewardIcon_C_SetRewardIcon) == 0x000020, "Wrong size on QuestRewardIcon_C_SetRewardIcon");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, Self2) == 0x000000, "Member 'QuestRewardIcon_C_SetRewardIcon::Self2' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, InRewardType) == 0x000008, "Member 'QuestRewardIcon_C_SetRewardIcon::InRewardType' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, InId) == 0x00000C, "Member 'QuestRewardIcon_C_SetRewardIcon::InId' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, InAmount) == 0x000010, "Member 'QuestRewardIcon_C_SetRewardIcon::InAmount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, bUseRewardLottery) == 0x000014, "Member 'QuestRewardIcon_C_SetRewardIcon::bUseRewardLottery' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, AmountRangeMin) == 0x000018, "Member 'QuestRewardIcon_C_SetRewardIcon::AmountRangeMin' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardIcon, AmountRangeMax) == 0x00001C, "Member 'QuestRewardIcon_C_SetRewardIcon::AmountRangeMax' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetClassExp
// 0x0004 (0x0004 - 0x0000)
struct QuestRewardIcon_C_SetClassExp final
{
public:
	int32                                         Exp;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetClassExp) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetClassExp");
static_assert(sizeof(QuestRewardIcon_C_SetClassExp) == 0x000004, "Wrong size on QuestRewardIcon_C_SetClassExp");
static_assert(offsetof(QuestRewardIcon_C_SetClassExp, Exp) == 0x000000, "Member 'QuestRewardIcon_C_SetClassExp::Exp' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetMoney
// 0x0004 (0x0004 - 0x0000)
struct QuestRewardIcon_C_SetMoney final
{
public:
	int32                                         Num;                                               // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetMoney) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetMoney");
static_assert(sizeof(QuestRewardIcon_C_SetMoney) == 0x000004, "Wrong size on QuestRewardIcon_C_SetMoney");
static_assert(offsetof(QuestRewardIcon_C_SetMoney, Num) == 0x000000, "Member 'QuestRewardIcon_C_SetMoney::Num' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.Setup
// 0x00D0 (0x00D0 - 0x0000)
struct QuestRewardIcon_C_Setup final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E31[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0008(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0048(0x0010)(ReferenceParm)
	class FString                                 CallFunc_GetTextFromAsset_ReturnValue;             // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E32[0x7];                                     // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0070(0x0018)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0088(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00A0(0x0018)()
	class FText                                   K2Node_Select_Default;                             // 0x00B8(0x0018)()
};
static_assert(alignof(QuestRewardIcon_C_Setup) == 0x000008, "Wrong alignment on QuestRewardIcon_C_Setup");
static_assert(sizeof(QuestRewardIcon_C_Setup) == 0x0000D0, "Wrong size on QuestRewardIcon_C_Setup");
static_assert(offsetof(QuestRewardIcon_C_Setup, Temp_bool_Variable) == 0x000000, "Member 'QuestRewardIcon_C_Setup::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, K2Node_MakeStruct_FormatArgumentData) == 0x000008, "Member 'QuestRewardIcon_C_Setup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, K2Node_MakeArray_Array) == 0x000048, "Member 'QuestRewardIcon_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, CallFunc_GetTextFromAsset_ReturnValue) == 0x000058, "Member 'QuestRewardIcon_C_Setup::CallFunc_GetTextFromAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, CallFunc_NotEqual_IntInt_ReturnValue) == 0x000068, "Member 'QuestRewardIcon_C_Setup::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000070, "Member 'QuestRewardIcon_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, CallFunc_GetText_ReturnValue) == 0x000088, "Member 'QuestRewardIcon_C_Setup::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, CallFunc_Format_ReturnValue) == 0x0000A0, "Member 'QuestRewardIcon_C_Setup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_Setup, K2Node_Select_Default) == 0x0000B8, "Member 'QuestRewardIcon_C_Setup::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetOption
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetOption final
{
public:
	bool                                          IsLuminous;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          IsBonus;                                           // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E33[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InTeamBonusPercent;                                // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetOption) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetOption");
static_assert(sizeof(QuestRewardIcon_C_SetOption) == 0x000008, "Wrong size on QuestRewardIcon_C_SetOption");
static_assert(offsetof(QuestRewardIcon_C_SetOption, IsLuminous) == 0x000000, "Member 'QuestRewardIcon_C_SetOption::IsLuminous' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetOption, IsBonus) == 0x000001, "Member 'QuestRewardIcon_C_SetOption::IsBonus' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetOption, InTeamBonusPercent) == 0x000004, "Member 'QuestRewardIcon_C_SetOption::InTeamBonusPercent' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetLuminous
// 0x0018 (0x0018 - 0x0000)
struct QuestRewardIcon_C_SetLuminous final
{
public:
	bool                                          InIsDraw;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E34[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           LocalLinearColor;                                  // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetLuminous) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetLuminous");
static_assert(sizeof(QuestRewardIcon_C_SetLuminous) == 0x000018, "Wrong size on QuestRewardIcon_C_SetLuminous");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, InIsDraw) == 0x000000, "Member 'QuestRewardIcon_C_SetLuminous::InIsDraw' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, LocalLinearColor) == 0x000004, "Member 'QuestRewardIcon_C_SetLuminous::LocalLinearColor' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, CallFunc_MakeLiteralByte_ReturnValue) == 0x000014, "Member 'QuestRewardIcon_C_SetLuminous::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000015, "Member 'QuestRewardIcon_C_SetLuminous::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, Temp_bool_Variable) == 0x000016, "Member 'QuestRewardIcon_C_SetLuminous::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLuminous, K2Node_Select_Default) == 0x000017, "Member 'QuestRewardIcon_C_SetLuminous::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetBonus
// 0x0001 (0x0001 - 0x0000)
struct QuestRewardIcon_C_SetBonus final
{
public:
	bool                                          Param_bBonus;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetBonus) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetBonus");
static_assert(sizeof(QuestRewardIcon_C_SetBonus) == 0x000001, "Wrong size on QuestRewardIcon_C_SetBonus");
static_assert(offsetof(QuestRewardIcon_C_SetBonus, Param_bBonus) == 0x000000, "Member 'QuestRewardIcon_C_SetBonus::Param_bBonus' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetTeamBonus
// 0x0028 (0x0028 - 0x0000)
struct QuestRewardIcon_C_SetTeamBonus final
{
public:
	int32                                         InTeamBonusPercent;                                // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsBonus;                                           // 0x0004(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E35[0x1];                                     // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetTeamBonus) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetTeamBonus");
static_assert(sizeof(QuestRewardIcon_C_SetTeamBonus) == 0x000028, "Wrong size on QuestRewardIcon_C_SetTeamBonus");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, InTeamBonusPercent) == 0x000000, "Member 'QuestRewardIcon_C_SetTeamBonus::InTeamBonusPercent' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, IsBonus) == 0x000004, "Member 'QuestRewardIcon_C_SetTeamBonus::IsBonus' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, Temp_byte_Variable) == 0x000005, "Member 'QuestRewardIcon_C_SetTeamBonus::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, CallFunc_Less_IntInt_ReturnValue) == 0x000006, "Member 'QuestRewardIcon_C_SetTeamBonus::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'QuestRewardIcon_C_SetTeamBonus::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, Temp_byte_Variable_1) == 0x000020, "Member 'QuestRewardIcon_C_SetTeamBonus::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, Temp_bool_Variable) == 0x000021, "Member 'QuestRewardIcon_C_SetTeamBonus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTeamBonus, K2Node_Select_Default) == 0x000022, "Member 'QuestRewardIcon_C_SetTeamBonus::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetBGVisible
// 0x0005 (0x0005 - 0x0000)
struct QuestRewardIcon_C_SetBGVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetBGVisible) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetBGVisible");
static_assert(sizeof(QuestRewardIcon_C_SetBGVisible) == 0x000005, "Wrong size on QuestRewardIcon_C_SetBGVisible");
static_assert(offsetof(QuestRewardIcon_C_SetBGVisible, Param_IsVisible) == 0x000000, "Member 'QuestRewardIcon_C_SetBGVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetBGVisible, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetBGVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetBGVisible, Temp_byte_Variable) == 0x000002, "Member 'QuestRewardIcon_C_SetBGVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetBGVisible, Temp_byte_Variable_1) == 0x000003, "Member 'QuestRewardIcon_C_SetBGVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetBGVisible, K2Node_Select_Default) == 0x000004, "Member 'QuestRewardIcon_C_SetBGVisible::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetFloorNumberVisible
// 0x0005 (0x0005 - 0x0000)
struct QuestRewardIcon_C_SetFloorNumberVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetFloorNumberVisible) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetFloorNumberVisible");
static_assert(sizeof(QuestRewardIcon_C_SetFloorNumberVisible) == 0x000005, "Wrong size on QuestRewardIcon_C_SetFloorNumberVisible");
static_assert(offsetof(QuestRewardIcon_C_SetFloorNumberVisible, Param_IsVisible) == 0x000000, "Member 'QuestRewardIcon_C_SetFloorNumberVisible::Param_IsVisible' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFloorNumberVisible, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetFloorNumberVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFloorNumberVisible, Temp_byte_Variable) == 0x000002, "Member 'QuestRewardIcon_C_SetFloorNumberVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFloorNumberVisible, Temp_byte_Variable_1) == 0x000003, "Member 'QuestRewardIcon_C_SetFloorNumberVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFloorNumberVisible, K2Node_Select_Default) == 0x000004, "Member 'QuestRewardIcon_C_SetFloorNumberVisible::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetFlagVisible
// 0x0005 (0x0005 - 0x0000)
struct QuestRewardIcon_C_SetFlagVisible final
{
public:
	bool                                          Param_Index;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetFlagVisible) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetFlagVisible");
static_assert(sizeof(QuestRewardIcon_C_SetFlagVisible) == 0x000005, "Wrong size on QuestRewardIcon_C_SetFlagVisible");
static_assert(offsetof(QuestRewardIcon_C_SetFlagVisible, Param_Index) == 0x000000, "Member 'QuestRewardIcon_C_SetFlagVisible::Param_Index' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFlagVisible, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetFlagVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFlagVisible, Temp_byte_Variable) == 0x000002, "Member 'QuestRewardIcon_C_SetFlagVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFlagVisible, Temp_byte_Variable_1) == 0x000003, "Member 'QuestRewardIcon_C_SetFlagVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetFlagVisible, K2Node_Select_Default) == 0x000004, "Member 'QuestRewardIcon_C_SetFlagVisible::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountVisibility
// 0x0005 (0x0005 - 0x0000)
struct QuestRewardIcon_C_SetAmountVisibility final
{
public:
	bool                                          InIconAmountVisibility;                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          UnderIconAmountVisibility;                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetAmountVisibility) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetAmountVisibility");
static_assert(sizeof(QuestRewardIcon_C_SetAmountVisibility) == 0x000005, "Wrong size on QuestRewardIcon_C_SetAmountVisibility");
static_assert(offsetof(QuestRewardIcon_C_SetAmountVisibility, InIconAmountVisibility) == 0x000000, "Member 'QuestRewardIcon_C_SetAmountVisibility::InIconAmountVisibility' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountVisibility, UnderIconAmountVisibility) == 0x000001, "Member 'QuestRewardIcon_C_SetAmountVisibility::UnderIconAmountVisibility' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountVisibility, CallFunc_Not_PreBool_ReturnValue) == 0x000002, "Member 'QuestRewardIcon_C_SetAmountVisibility::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountVisibility, CallFunc_BooleanAND_ReturnValue) == 0x000003, "Member 'QuestRewardIcon_C_SetAmountVisibility::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountVisibility, CallFunc_BooleanAND_ReturnValue_1) == 0x000004, "Member 'QuestRewardIcon_C_SetAmountVisibility::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColor
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_SetAmountColor final
{
public:
	struct FLinearColor                           InColor;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetAmountColor) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetAmountColor");
static_assert(sizeof(QuestRewardIcon_C_SetAmountColor) == 0x000010, "Wrong size on QuestRewardIcon_C_SetAmountColor");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColor, InColor) == 0x000000, "Member 'QuestRewardIcon_C_SetAmountColor::InColor' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorType
// 0x0048 (0x0048 - 0x0000)
struct QuestRewardIcon_C_SetAmountColorType final
{
public:
	class FString                                 ColorName;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetAmountColorOrange_Color;               // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchString_CmpSuccess;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E36[0x3];                                     // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetAmountColorYellow_Color;               // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_GetAmountColorWhite_Color;                // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetAmountColorType) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetAmountColorType");
static_assert(sizeof(QuestRewardIcon_C_SetAmountColorType) == 0x000048, "Wrong size on QuestRewardIcon_C_SetAmountColorType");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorType, ColorName) == 0x000000, "Member 'QuestRewardIcon_C_SetAmountColorType::ColorName' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorType, CallFunc_GetAmountColorOrange_Color) == 0x000010, "Member 'QuestRewardIcon_C_SetAmountColorType::CallFunc_GetAmountColorOrange_Color' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorType, K2Node_SwitchString_CmpSuccess) == 0x000020, "Member 'QuestRewardIcon_C_SetAmountColorType::K2Node_SwitchString_CmpSuccess' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorType, CallFunc_GetAmountColorYellow_Color) == 0x000024, "Member 'QuestRewardIcon_C_SetAmountColorType::CallFunc_GetAmountColorYellow_Color' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorType, CallFunc_GetAmountColorWhite_Color) == 0x000034, "Member 'QuestRewardIcon_C_SetAmountColorType::CallFunc_GetAmountColorWhite_Color' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconVisible
// 0x0001 (0x0001 - 0x0000)
struct QuestRewardIcon_C_SetAlertIconVisible final
{
public:
	bool                                          Param_IsVisible;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetAlertIconVisible) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetAlertIconVisible");
static_assert(sizeof(QuestRewardIcon_C_SetAlertIconVisible) == 0x000001, "Wrong size on QuestRewardIcon_C_SetAlertIconVisible");
static_assert(offsetof(QuestRewardIcon_C_SetAlertIconVisible, Param_IsVisible) == 0x000000, "Member 'QuestRewardIcon_C_SetAlertIconVisible::Param_IsVisible' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAlertIconType
// 0x0001 (0x0001 - 0x0000)
struct QuestRewardIcon_C_SetAlertIconType final
{
public:
	bool                                          IsYellow;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetAlertIconType) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetAlertIconType");
static_assert(sizeof(QuestRewardIcon_C_SetAlertIconType) == 0x000001, "Wrong size on QuestRewardIcon_C_SetAlertIconType");
static_assert(offsetof(QuestRewardIcon_C_SetAlertIconType, IsYellow) == 0x000000, "Member 'QuestRewardIcon_C_SetAlertIconType::IsYellow' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetCheck
// 0x0005 (0x0005 - 0x0000)
struct QuestRewardIcon_C_SetCheck final
{
public:
	bool                                          bInCheck;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetCheck) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetCheck");
static_assert(sizeof(QuestRewardIcon_C_SetCheck) == 0x000005, "Wrong size on QuestRewardIcon_C_SetCheck");
static_assert(offsetof(QuestRewardIcon_C_SetCheck, bInCheck) == 0x000000, "Member 'QuestRewardIcon_C_SetCheck::bInCheck' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCheck, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetCheck::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCheck, Temp_byte_Variable) == 0x000002, "Member 'QuestRewardIcon_C_SetCheck::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCheck, Temp_byte_Variable_1) == 0x000003, "Member 'QuestRewardIcon_C_SetCheck::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCheck, K2Node_Select_Default) == 0x000004, "Member 'QuestRewardIcon_C_SetCheck::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetGC
// 0x0004 (0x0004 - 0x0000)
struct QuestRewardIcon_C_SetGC final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetGC) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetGC");
static_assert(sizeof(QuestRewardIcon_C_SetGC) == 0x000004, "Wrong size on QuestRewardIcon_C_SetGC");
static_assert(offsetof(QuestRewardIcon_C_SetGC, Param_Amount) == 0x000000, "Member 'QuestRewardIcon_C_SetGC::Param_Amount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetSkyCoin
// 0x0004 (0x0004 - 0x0000)
struct QuestRewardIcon_C_SetSkyCoin final
{
public:
	int32                                         Param_Amount;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetSkyCoin) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetSkyCoin");
static_assert(sizeof(QuestRewardIcon_C_SetSkyCoin) == 0x000004, "Wrong size on QuestRewardIcon_C_SetSkyCoin");
static_assert(offsetof(QuestRewardIcon_C_SetSkyCoin, Param_Amount) == 0x000000, "Member 'QuestRewardIcon_C_SetSkyCoin::Param_Amount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetImagine
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetImagine final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAlwaysCategoryIcon;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetImagine) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetImagine");
static_assert(sizeof(QuestRewardIcon_C_SetImagine) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetImagine");
static_assert(offsetof(QuestRewardIcon_C_SetImagine, Param_Index) == 0x000000, "Member 'QuestRewardIcon_C_SetImagine::Param_Index' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetImagine, Param_Amount) == 0x000004, "Member 'QuestRewardIcon_C_SetImagine::Param_Amount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetImagine, bIsAlwaysCategoryIcon) == 0x000008, "Member 'QuestRewardIcon_C_SetImagine::bIsAlwaysCategoryIcon' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetMountImagine
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetMountImagine final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetMountImagine) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetMountImagine");
static_assert(sizeof(QuestRewardIcon_C_SetMountImagine) == 0x000008, "Wrong size on QuestRewardIcon_C_SetMountImagine");
static_assert(offsetof(QuestRewardIcon_C_SetMountImagine, Param_Index) == 0x000000, "Member 'QuestRewardIcon_C_SetMountImagine::Param_Index' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetMountImagine, Param_Amount) == 0x000004, "Member 'QuestRewardIcon_C_SetMountImagine::Param_Amount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetCostume
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetCostume final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_SetAmount2VisibilityByAmount_bVisible;    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetCostume) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetCostume");
static_assert(sizeof(QuestRewardIcon_C_SetCostume) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetCostume");
static_assert(offsetof(QuestRewardIcon_C_SetCostume, ItemIndex) == 0x000000, "Member 'QuestRewardIcon_C_SetCostume::ItemIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCostume, Param_Amount) == 0x000004, "Member 'QuestRewardIcon_C_SetCostume::Param_Amount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetCostume, CallFunc_SetAmount2VisibilityByAmount_bVisible) == 0x000008, "Member 'QuestRewardIcon_C_SetCostume::CallFunc_SetAmount2VisibilityByAmount_bVisible' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetWeapon
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetWeapon final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsAlwaysCategoryIcon;                             // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetWeapon) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetWeapon");
static_assert(sizeof(QuestRewardIcon_C_SetWeapon) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetWeapon");
static_assert(offsetof(QuestRewardIcon_C_SetWeapon, Param_Index) == 0x000000, "Member 'QuestRewardIcon_C_SetWeapon::Param_Index' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeapon, Param_Amount) == 0x000004, "Member 'QuestRewardIcon_C_SetWeapon::Param_Amount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeapon, bIsAlwaysCategoryIcon) == 0x000008, "Member 'QuestRewardIcon_C_SetWeapon::bIsAlwaysCategoryIcon' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetWeaponDetails
// 0x0070 (0x0070 - 0x0000)
struct QuestRewardIcon_C_SetWeaponDetails final
{
public:
	int32                                         Param_Index;                                       // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InItemUniqueId;                                    // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStorageNumber;                                   // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E37[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBWeaponItemData                      InWeaponData;                                      // 0x0020(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(QuestRewardIcon_C_SetWeaponDetails) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetWeaponDetails");
static_assert(sizeof(QuestRewardIcon_C_SetWeaponDetails) == 0x000070, "Wrong size on QuestRewardIcon_C_SetWeaponDetails");
static_assert(offsetof(QuestRewardIcon_C_SetWeaponDetails, Param_Index) == 0x000000, "Member 'QuestRewardIcon_C_SetWeaponDetails::Param_Index' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeaponDetails, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetWeaponDetails::InAmount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeaponDetails, InItemUniqueId) == 0x000008, "Member 'QuestRewardIcon_C_SetWeaponDetails::InItemUniqueId' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeaponDetails, InStorageNumber) == 0x000018, "Member 'QuestRewardIcon_C_SetWeaponDetails::InStorageNumber' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetWeaponDetails, InWeaponData) == 0x000020, "Member 'QuestRewardIcon_C_SetWeaponDetails::InWeaponData' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetItem
// 0x0014 (0x0014 - 0x0000)
struct QuestRewardIcon_C_SetItem final
{
public:
	int32                                         ItemIndex;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Param_Amount;                                      // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsUnidentified;                                    // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E38[0x3];                                     // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         AmountMin;                                         // 0x000C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         AmountMax;                                         // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetItem) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetItem");
static_assert(sizeof(QuestRewardIcon_C_SetItem) == 0x000014, "Wrong size on QuestRewardIcon_C_SetItem");
static_assert(offsetof(QuestRewardIcon_C_SetItem, ItemIndex) == 0x000000, "Member 'QuestRewardIcon_C_SetItem::ItemIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItem, Param_Amount) == 0x000004, "Member 'QuestRewardIcon_C_SetItem::Param_Amount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItem, IsUnidentified) == 0x000008, "Member 'QuestRewardIcon_C_SetItem::IsUnidentified' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItem, AmountMin) == 0x00000C, "Member 'QuestRewardIcon_C_SetItem::AmountMin' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItem, AmountMax) == 0x000010, "Member 'QuestRewardIcon_C_SetItem::AmountMax' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetItemSimpleAmount
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetItemSimpleAmount final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsUnIdentified;                                   // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetItemSimpleAmount) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetItemSimpleAmount");
static_assert(sizeof(QuestRewardIcon_C_SetItemSimpleAmount) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetItemSimpleAmount");
static_assert(offsetof(QuestRewardIcon_C_SetItemSimpleAmount, InIndex) == 0x000000, "Member 'QuestRewardIcon_C_SetItemSimpleAmount::InIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItemSimpleAmount, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetItemSimpleAmount::InAmount' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetItemSimpleAmount, bIsUnIdentified) == 0x000008, "Member 'QuestRewardIcon_C_SetItemSimpleAmount::bIsUnIdentified' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetStamp
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetStamp final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetStamp) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetStamp");
static_assert(sizeof(QuestRewardIcon_C_SetStamp) == 0x000008, "Wrong size on QuestRewardIcon_C_SetStamp");
static_assert(offsetof(QuestRewardIcon_C_SetStamp, InIndex) == 0x000000, "Member 'QuestRewardIcon_C_SetStamp::InIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetStamp, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetStamp::InAmount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetIconType
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_SetIconType final
{
public:
	bool                                          IsTacticalAbility;                                 // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E39[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetIconType) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetIconType");
static_assert(sizeof(QuestRewardIcon_C_SetIconType) == 0x000010, "Wrong size on QuestRewardIcon_C_SetIconType");
static_assert(offsetof(QuestRewardIcon_C_SetIconType, IsTacticalAbility) == 0x000000, "Member 'QuestRewardIcon_C_SetIconType::IsTacticalAbility' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetIconType, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetIconType::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetIconType, Temp_int_Variable) == 0x000004, "Member 'QuestRewardIcon_C_SetIconType::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetIconType, Temp_int_Variable_1) == 0x000008, "Member 'QuestRewardIcon_C_SetIconType::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetIconType, K2Node_Select_Default) == 0x00000C, "Member 'QuestRewardIcon_C_SetIconType::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetClickToShowDetail
// 0x0001 (0x0001 - 0x0000)
struct QuestRewardIcon_C_SetClickToShowDetail final
{
public:
	bool                                          Param_bIsClickToShowDetail;                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetClickToShowDetail) == 0x000001, "Wrong alignment on QuestRewardIcon_C_SetClickToShowDetail");
static_assert(sizeof(QuestRewardIcon_C_SetClickToShowDetail) == 0x000001, "Wrong size on QuestRewardIcon_C_SetClickToShowDetail");
static_assert(offsetof(QuestRewardIcon_C_SetClickToShowDetail, Param_bIsClickToShowDetail) == 0x000000, "Member 'QuestRewardIcon_C_SetClickToShowDetail::Param_bIsClickToShowDetail' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetReceivedStyle
// 0x0020 (0x0020 - 0x0000)
struct QuestRewardIcon_C_SetReceivedStyle final
{
public:
	bool                                          IsReceived;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E3A[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Temp_float_Variable;                               // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Temp_float_Variable_1;                             // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Select_Default;                             // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_MakeStruct_LinearColor;                     // 0x0010(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetReceivedStyle) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetReceivedStyle");
static_assert(sizeof(QuestRewardIcon_C_SetReceivedStyle) == 0x000020, "Wrong size on QuestRewardIcon_C_SetReceivedStyle");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, IsReceived) == 0x000000, "Member 'QuestRewardIcon_C_SetReceivedStyle::IsReceived' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetReceivedStyle::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, Temp_float_Variable) == 0x000004, "Member 'QuestRewardIcon_C_SetReceivedStyle::Temp_float_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, Temp_float_Variable_1) == 0x000008, "Member 'QuestRewardIcon_C_SetReceivedStyle::Temp_float_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, K2Node_Select_Default) == 0x00000C, "Member 'QuestRewardIcon_C_SetReceivedStyle::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetReceivedStyle, K2Node_MakeStruct_LinearColor) == 0x000010, "Member 'QuestRewardIcon_C_SetReceivedStyle::K2Node_MakeStruct_LinearColor' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetRewardMasterOnly
// 0x0080 (0x0080 - 0x0000)
struct QuestRewardIcon_C_SetRewardMasterOnly final
{
public:
	struct FSBMasterReward                        InMasterReward;                                    // 0x0000(0x0014)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	bool                                          bUseRewardLottery;                                 // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindRewardLotteryGroupsMaster_bIsValid;   // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E3B[0x1];                                     // 0x0017(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroups           CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster; // 0x0018(0x0018)()
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E3C[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterRewardLotteryGroupsRewards    CallFunc_Array_Get_Item;                           // 0x0034(0x0038)(NoDestructor)
	struct FSBMasterReward                        K2Node_MakeStruct_SBMasterReward;                  // 0x006C(0x0014)(NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetRewardMasterOnly) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetRewardMasterOnly");
static_assert(sizeof(QuestRewardIcon_C_SetRewardMasterOnly) == 0x000080, "Wrong size on QuestRewardIcon_C_SetRewardMasterOnly");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, InMasterReward) == 0x000000, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::InMasterReward' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, bUseRewardLottery) == 0x000014, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::bUseRewardLottery' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000015, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, CallFunc_FindRewardLotteryGroupsMaster_bIsValid) == 0x000016, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::CallFunc_FindRewardLotteryGroupsMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster) == 0x000018, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::CallFunc_FindRewardLotteryGroupsMaster_RewardLotteryGroupsMaster' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, CallFunc_BooleanAND_ReturnValue) == 0x000030, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, CallFunc_Array_Get_Item) == 0x000034, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRewardMasterOnly, K2Node_MakeStruct_SBMasterReward) == 0x00006C, "Member 'QuestRewardIcon_C_SetRewardMasterOnly::K2Node_MakeStruct_SBMasterReward' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.GetRewardId
// 0x0004 (0x0004 - 0x0000)
struct QuestRewardIcon_C_GetRewardId final
{
public:
	int32                                         Param_RewardId;                                    // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_GetRewardId) == 0x000004, "Wrong alignment on QuestRewardIcon_C_GetRewardId");
static_assert(sizeof(QuestRewardIcon_C_GetRewardId) == 0x000004, "Wrong size on QuestRewardIcon_C_GetRewardId");
static_assert(offsetof(QuestRewardIcon_C_GetRewardId, Param_RewardId) == 0x000000, "Member 'QuestRewardIcon_C_GetRewardId::Param_RewardId' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.GetMasterReward
// 0x0014 (0x0014 - 0x0000)
struct QuestRewardIcon_C_GetMasterReward final
{
public:
	struct FSBMasterReward                        Param_MasterReward;                                // 0x0000(0x0014)(Parm, OutParm, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_GetMasterReward) == 0x000004, "Wrong alignment on QuestRewardIcon_C_GetMasterReward");
static_assert(sizeof(QuestRewardIcon_C_GetMasterReward) == 0x000014, "Wrong size on QuestRewardIcon_C_GetMasterReward");
static_assert(offsetof(QuestRewardIcon_C_GetMasterReward, Param_MasterReward) == 0x000000, "Member 'QuestRewardIcon_C_GetMasterReward::Param_MasterReward' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAmountColorBonus
// 0x0038 (0x0038 - 0x0000)
struct QuestRewardIcon_C_SetAmountColorBonus final
{
public:
	bool                                          IsBonus;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E3D[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 Temp_string_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetAmountColorBonus) == 0x000008, "Wrong alignment on QuestRewardIcon_C_SetAmountColorBonus");
static_assert(sizeof(QuestRewardIcon_C_SetAmountColorBonus) == 0x000038, "Wrong size on QuestRewardIcon_C_SetAmountColorBonus");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorBonus, IsBonus) == 0x000000, "Member 'QuestRewardIcon_C_SetAmountColorBonus::IsBonus' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorBonus, Temp_bool_Variable) == 0x000001, "Member 'QuestRewardIcon_C_SetAmountColorBonus::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorBonus, Temp_string_Variable) == 0x000008, "Member 'QuestRewardIcon_C_SetAmountColorBonus::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorBonus, Temp_string_Variable_1) == 0x000018, "Member 'QuestRewardIcon_C_SetAmountColorBonus::Temp_string_Variable_1' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAmountColorBonus, K2Node_Select_Default) == 0x000028, "Member 'QuestRewardIcon_C_SetAmountColorBonus::K2Node_Select_Default' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetRecipe
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetRecipe final
{
public:
	ESBRewardItemType                             InType;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6E3E[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InIndex;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetRecipe) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetRecipe");
static_assert(sizeof(QuestRewardIcon_C_SetRecipe) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetRecipe");
static_assert(offsetof(QuestRewardIcon_C_SetRecipe, InType) == 0x000000, "Member 'QuestRewardIcon_C_SetRecipe::InType' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRecipe, InIndex) == 0x000004, "Member 'QuestRewardIcon_C_SetRecipe::InIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRecipe, InAmount) == 0x000008, "Member 'QuestRewardIcon_C_SetRecipe::InAmount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetRecipeSet
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetRecipeSet final
{
public:
	int32                                         InIdex;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetRecipeSet) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetRecipeSet");
static_assert(sizeof(QuestRewardIcon_C_SetRecipeSet) == 0x000008, "Wrong size on QuestRewardIcon_C_SetRecipeSet");
static_assert(offsetof(QuestRewardIcon_C_SetRecipeSet, InIdex) == 0x000000, "Member 'QuestRewardIcon_C_SetRecipeSet::InIdex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetRecipeSet, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetRecipeSet::InAmount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetAchivement
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetAchivement final
{
public:
	int32                                         InIdex;                                            // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetAchivement) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetAchivement");
static_assert(sizeof(QuestRewardIcon_C_SetAchivement) == 0x000008, "Wrong size on QuestRewardIcon_C_SetAchivement");
static_assert(offsetof(QuestRewardIcon_C_SetAchivement, InIdex) == 0x000000, "Member 'QuestRewardIcon_C_SetAchivement::InIdex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetAchivement, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetAchivement::InAmount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetLiquidMemory
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_SetLiquidMemory final
{
public:
	int32                                         InIndex;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InAmount;                                          // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_SetLiquidMemory) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetLiquidMemory");
static_assert(sizeof(QuestRewardIcon_C_SetLiquidMemory) == 0x000008, "Wrong size on QuestRewardIcon_C_SetLiquidMemory");
static_assert(offsetof(QuestRewardIcon_C_SetLiquidMemory, InIndex) == 0x000000, "Member 'QuestRewardIcon_C_SetLiquidMemory::InIndex' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetLiquidMemory, InAmount) == 0x000004, "Member 'QuestRewardIcon_C_SetLiquidMemory::InAmount' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.SetTacticalAbility
// 0x000C (0x000C - 0x0000)
struct QuestRewardIcon_C_SetTacticalAbility final
{
public:
	int32                                         SkillId;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SkillLV;                                           // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Param_bIsClickToShowDetail;                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_SetTacticalAbility) == 0x000004, "Wrong alignment on QuestRewardIcon_C_SetTacticalAbility");
static_assert(sizeof(QuestRewardIcon_C_SetTacticalAbility) == 0x00000C, "Wrong size on QuestRewardIcon_C_SetTacticalAbility");
static_assert(offsetof(QuestRewardIcon_C_SetTacticalAbility, SkillId) == 0x000000, "Member 'QuestRewardIcon_C_SetTacticalAbility::SkillId' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTacticalAbility, SkillLV) == 0x000004, "Member 'QuestRewardIcon_C_SetTacticalAbility::SkillLV' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_SetTacticalAbility, Param_bIsClickToShowDetail) == 0x000008, "Member 'QuestRewardIcon_C_SetTacticalAbility::Param_bIsClickToShowDetail' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.CreateDetail
// 0x0030 (0x0030 - 0x0000)
struct QuestRewardIcon_C_CreateDetail final
{
public:
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E3F[0x7];                                     // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_ProductDetailMenu_C*               CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetUIManager_IsValid;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6E40[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUIManager*                           CallFunc_GetUIManager_ReturnValue;                 // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x002A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x002B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_CreateDetail) == 0x000008, "Wrong alignment on QuestRewardIcon_C_CreateDetail");
static_assert(sizeof(QuestRewardIcon_C_CreateDetail) == 0x000030, "Wrong size on QuestRewardIcon_C_CreateDetail");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_GetOwningPlayer_ReturnValue) == 0x000000, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_Create_ReturnValue) == 0x000010, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_GetUIManager_IsValid) == 0x000018, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_GetUIManager_IsValid' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_GetUIManager_ReturnValue) == 0x000020, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_GetUIManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_IsEmpty_ReturnValue) == 0x000028, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_NotEqual_NameName_ReturnValue) == 0x000029, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_Not_PreBool_ReturnValue) == 0x00002A, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_CreateDetail, CallFunc_BooleanAND_ReturnValue) == 0x00002B, "Member 'QuestRewardIcon_C_CreateDetail::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.PlayAnimTeamBonus
// 0x0008 (0x0008 - 0x0000)
struct QuestRewardIcon_C_PlayAnimTeamBonus final
{
public:
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_PlayAnimTeamBonus) == 0x000008, "Wrong alignment on QuestRewardIcon_C_PlayAnimTeamBonus");
static_assert(sizeof(QuestRewardIcon_C_PlayAnimTeamBonus) == 0x000008, "Wrong size on QuestRewardIcon_C_PlayAnimTeamBonus");
static_assert(offsetof(QuestRewardIcon_C_PlayAnimTeamBonus, CallFunc_PlayAnimation_ReturnValue) == 0x000000, "Member 'QuestRewardIcon_C_PlayAnimTeamBonus::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorWhite
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_GetAmountColorWhite final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_GetAmountColorWhite) == 0x000004, "Wrong alignment on QuestRewardIcon_C_GetAmountColorWhite");
static_assert(sizeof(QuestRewardIcon_C_GetAmountColorWhite) == 0x000010, "Wrong size on QuestRewardIcon_C_GetAmountColorWhite");
static_assert(offsetof(QuestRewardIcon_C_GetAmountColorWhite, Color) == 0x000000, "Member 'QuestRewardIcon_C_GetAmountColorWhite::Color' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorYellow
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_GetAmountColorYellow final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_GetAmountColorYellow) == 0x000004, "Wrong alignment on QuestRewardIcon_C_GetAmountColorYellow");
static_assert(sizeof(QuestRewardIcon_C_GetAmountColorYellow) == 0x000010, "Wrong size on QuestRewardIcon_C_GetAmountColorYellow");
static_assert(offsetof(QuestRewardIcon_C_GetAmountColorYellow, Color) == 0x000000, "Member 'QuestRewardIcon_C_GetAmountColorYellow::Color' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.GetAmountColorOrange
// 0x0010 (0x0010 - 0x0000)
struct QuestRewardIcon_C_GetAmountColorOrange final
{
public:
	struct FLinearColor                           Color;                                             // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(QuestRewardIcon_C_GetAmountColorOrange) == 0x000004, "Wrong alignment on QuestRewardIcon_C_GetAmountColorOrange");
static_assert(sizeof(QuestRewardIcon_C_GetAmountColorOrange) == 0x000010, "Wrong size on QuestRewardIcon_C_GetAmountColorOrange");
static_assert(offsetof(QuestRewardIcon_C_GetAmountColorOrange, Color) == 0x000000, "Member 'QuestRewardIcon_C_GetAmountColorOrange::Color' has a wrong offset!");

// Function QuestRewardIcon.QuestRewardIcon_C.isDetailWindow
// 0x0002 (0x0002 - 0x0000)
struct QuestRewardIcon_C_IsDetailWindow final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(QuestRewardIcon_C_IsDetailWindow) == 0x000001, "Wrong alignment on QuestRewardIcon_C_IsDetailWindow");
static_assert(sizeof(QuestRewardIcon_C_IsDetailWindow) == 0x000002, "Wrong size on QuestRewardIcon_C_IsDetailWindow");
static_assert(offsetof(QuestRewardIcon_C_IsDetailWindow, Result) == 0x000000, "Member 'QuestRewardIcon_C_IsDetailWindow::Result' has a wrong offset!");
static_assert(offsetof(QuestRewardIcon_C_IsDetailWindow, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'QuestRewardIcon_C_IsDetailWindow::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

