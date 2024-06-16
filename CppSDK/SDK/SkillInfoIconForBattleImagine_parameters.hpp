#pragma once

 

// Package: SkillInfoIconForBattleImagine

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "ST_ToolTipInfo_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.OnBattleImagineIconPressed__DelegateSignature
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature final
{
public:
	ESkillActionPosition                          InBattleImagineSAP;                                // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB0[0x7];                                     // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InBattleImagineUniqueId;                           // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature) == 0x000018, "Wrong size on SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineSAP) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature, InBattleImagineUniqueId) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_OnBattleImagineIconPressed__DelegateSignature::InBattleImagineUniqueId' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.ExecuteUbergraph_SkillInfoIconForBattleImagine
// 0x0020 (0x0020 - 0x0000)
struct SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetSkillInfoItemSize_OutIsValid;          // 0x0012(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB2[0x1];                                     // 0x0013(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetSkillInfoItemSize_OutSize;             // 0x0014(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine) == 0x000020, "Wrong size on SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, EntryPoint) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::EntryPoint' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_IsValid_ReturnValue_1) == 0x000010, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, K2Node_Event_IsDesignTime) == 0x000011, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_GetSkillInfoItemSize_OutIsValid) == 0x000012, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_GetSkillInfoItemSize_OutIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_GetSkillInfoItemSize_OutSize) == 0x000014, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_GetSkillInfoItemSize_OutSize' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine, CallFunc_IsValid_ReturnValue_2) == 0x00001C, "Member 'SkillInfoIconForBattleImagine_C_ExecuteUbergraph_SkillInfoIconForBattleImagine::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct SkillInfoIconForBattleImagine_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_PreConstruct) == 0x000001, "Wrong alignment on SkillInfoIconForBattleImagine_C_PreConstruct");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_PreConstruct) == 0x000001, "Wrong size on SkillInfoIconForBattleImagine_C_PreConstruct");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.CreateTooltipForBattleImagine
// 0x0150 (0x0150 - 0x0000)
struct SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine final
{
public:
	struct FST_ToolTipInfo                        InImagineTooltipInfo;                              // 0x0000(0x0078)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	bool                                          InIsNotUseTooltip;                                 // 0x0078(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB3[0x5];                                     // 0x007B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0080(0x00B0)()
	class UCommonIconToolTipContent_ActiveImagine_C* K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine; // 0x0130(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0139(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB4[0x6];                                     // 0x013A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonIconToolTipContent_ActiveImagine_C* CallFunc_Create_ReturnValue;                       // 0x0140(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0148(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine) == 0x000150, "Wrong size on SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, InImagineTooltipInfo) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::InImagineTooltipInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, InIsNotUseTooltip) == 0x000078, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::InIsNotUseTooltip' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_Not_PreBool_ReturnValue) == 0x000079, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_FindImagineMaster_bIsValid) == 0x00007A, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_FindImagineMaster_ImagineMaster) == 0x000080, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine) == 0x000130, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::K2Node_DynamicCast_AsCommon_Icon_Tool_Tip_Content_Active_Imagine' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, K2Node_DynamicCast_bSuccess) == 0x000138, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_IsValid_ReturnValue) == 0x000139, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_Create_ReturnValue) == 0x000140, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine, CallFunc_IsValid_ReturnValue_1) == 0x000148, "Member 'SkillInfoIconForBattleImagine_C_CreateTooltipForBattleImagine::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfo
// 0x04B0 (0x04B0 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBattleImagineInfo final
{
public:
	class FString                                 InImagineUniqueId;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                          InIsInformationHidden;                             // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsStorageMode;                                   // 0x0011(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InIsImagineIconActive;                             // 0x0012(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x0013(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InDontDisplayAlertIcon;                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          InForceLevelSyncOff;                               // 0x0015(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsTermLimited;                                // 0x0016(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalForceLevelSyncOff;                            // 0x0017(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalDontDisplayAlertIcon;                         // 0x0018(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsAlertIconOn;                                // 0x0019(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB5[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        LocalTooltipInfo;                                  // 0x0020(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalItemId;                                       // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EB6[0x4];                                     // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x00A0(0x0118)(Edit, BlueprintVisible)
	bool                                          LocalIsStorageMode;                                // 0x01B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalIsInformationHidden;                          // 0x01B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB7[0x2];                                     // 0x01BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetClassLevelFromClassType_ReturnValue;   // 0x01BC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x01C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x01C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB8[0x6];                                     // 0x01C2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x01D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EB9[0x7];                                     // 0x01D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x01D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x01E1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EBA[0x6];                                     // 0x01E2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x01E8(0x0118)(ConstParm)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x0300(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackBNum_ReturnValue;                 // 0x0304(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x0308(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBB[0x4];                                     // 0x030C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x0310(0x0078)(HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0388(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0389(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EBC[0x6];                                     // 0x038A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0390(0x0118)(ConstParm)
	bool                                          CallFunc_NotEqual_StrStr_ReturnValue;              // 0x04A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBattleImagineInfo");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo) == 0x0004B0, "Wrong size on SkillInfoIconForBattleImagine_C_SetBattleImagineInfo");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InImagineUniqueId) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InIsInformationHidden) == 0x000010, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InIsStorageMode) == 0x000011, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InIsStorageMode' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InIsImagineIconActive) == 0x000012, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InIsImagineIconActive' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InClassType) == 0x000013, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InDontDisplayAlertIcon) == 0x000014, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InDontDisplayAlertIcon' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, InForceLevelSyncOff) == 0x000015, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalIsTermLimited) == 0x000016, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalForceLevelSyncOff) == 0x000017, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalDontDisplayAlertIcon) == 0x000018, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalDontDisplayAlertIcon' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalIsAlertIconOn) == 0x000019, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalIsAlertIconOn' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalClassType) == 0x00001A, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalTooltipInfo) == 0x000020, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalTooltipInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalItemId) == 0x000098, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalItemId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalOwnItemInfo) == 0x0000A0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalIsStorageMode) == 0x0001B8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalIsStorageMode' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, LocalIsInformationHidden) == 0x0001B9, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::LocalIsInformationHidden' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetClassLevelFromClassType_ReturnValue) == 0x0001BC, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetClassLevelFromClassType_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_Not_PreBool_ReturnValue) == 0x0001C0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_MakeLiteralBool_ReturnValue) == 0x0001C1, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetCharacterStorage_ReturnValue) == 0x0001C8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_IsValid_ReturnValue) == 0x0001D0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetEquipmentBag_ReturnValue) == 0x0001D8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_IsValid_ReturnValue_1) == 0x0001E0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x0001E1, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x0001E8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetStackBMax_ReturnValue) == 0x000300, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetStackBNum_ReturnValue) == 0x000304, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetStackBNum_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_GetItemLevel_ReturnValue) == 0x000308, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, K2Node_MakeStruct_ST_ToolTipInfo) == 0x000310, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, K2Node_SwitchEnum_CmpSuccess) == 0x000388, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000389, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000390, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfo, CallFunc_NotEqual_StrStr_ReturnValue) == 0x0004A8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfo::CallFunc_NotEqual_StrStr_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetIsBattleImagineEmpty
// 0x0010 (0x0010 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsEmpty;                                         // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESkillActionPosition                          LocalSAP;                                          // 0x0002(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetGaugeImagine_OutIsVaild;               // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EBD[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeImagine_C*               CallFunc_GetGaugeImagine_OutGaugeImagine;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty) == 0x000010, "Wrong size on SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, InSkillActionPosition) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, InIsEmpty) == 0x000001, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::InIsEmpty' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, LocalSAP) == 0x000002, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::LocalSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, CallFunc_IsValid_ReturnValue) == 0x000003, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, CallFunc_GetGaugeImagine_OutIsVaild) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::CallFunc_GetGaugeImagine_OutIsVaild' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty, CallFunc_GetGaugeImagine_OutGaugeImagine) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_SetIsBattleImagineEmpty::CallFunc_GetGaugeImagine_OutGaugeImagine' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevel
// 0x03B0 (0x03B0 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBattleImagineLevel final
{
public:
	int32                                         InLevel;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EBE[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 InImagineUniqueId;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	ESBClassType                                  InClassType;                                       // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InForceLevelSyncOff;                               // 0x0019(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          LocalForceLevelSyncOff;                            // 0x001A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EBF[0x5];                                     // 0x001B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0020(0x0118)(Edit, BlueprintVisible)
	ESBClassType                                  LocalClassType;                                    // 0x0138(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC0[0x7];                                     // 0x0139(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0140(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalLevel;                                        // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0154(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0155(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0156(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC1[0x1];                                     // 0x0157(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0168(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0169(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x016A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC2[0x5];                                     // 0x016B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0170(0x0118)(ConstParm)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x0288(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC3[0x7];                                     // 0x0289(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x0290(0x0118)(ConstParm)
	bool                                          Temp_bool_Variable;                                // 0x03A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x03A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x03AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBattleImagineLevel");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel) == 0x0003B0, "Wrong size on SkillInfoIconForBattleImagine_C_SetBattleImagineLevel");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, InLevel) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::InLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, InImagineUniqueId) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, InClassType) == 0x000018, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::InClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, InForceLevelSyncOff) == 0x000019, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::InForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, LocalForceLevelSyncOff) == 0x00001A, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::LocalForceLevelSyncOff' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, LocalOwnItemInfo) == 0x000020, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, LocalClassType) == 0x000138, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, LocalImagineUniqueId) == 0x000140, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, LocalLevel) == 0x000150, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::LocalLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_MakeLiteralByte_ReturnValue) == 0x000154, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_IsValid_ReturnValue) == 0x000155, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000156, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_GetCharacterStorage_ReturnValue) == 0x000158, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_GetEquipmentBag_ReturnValue) == 0x000160, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_IsValid_ReturnValue_1) == 0x000168, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_IsValid_ReturnValue_2) == 0x000169, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x00016A, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000170, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x000288, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x000290, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, Temp_bool_Variable) == 0x0003A8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, CallFunc_Greater_IntInt_ReturnValue) == 0x0003A9, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevel, K2Node_Select_Default) == 0x0003AA, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevel::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineLevelVisibility
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility) == 0x000001, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility) == 0x000005, "Wrong size on SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility, InIsVisible) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000002, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility, Temp_bool_Variable) == 0x000003, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineLevelVisibility::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineAlertIconVisibility
// 0x0006 (0x0006 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility) == 0x000001, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility) == 0x000006, "Wrong size on SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, InIsVisible) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, CallFunc_MakeLiteralByte_ReturnValue) == 0x000001, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, Temp_bool_Variable) == 0x000002, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000003, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility, CallFunc_IsValid_ReturnValue) == 0x000005, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineAlertIconVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.UpdateBattleImagineIcon
// 0x0250 (0x0250 - 0x0000)
struct SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC4[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InImagineId;                                       // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 InImagineUniqueId;                                 // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         InStackBNum;                                       // 0x0018(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         InStackBMax;                                       // 0x001C(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InIsTermLimited;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bLocalIsTermLimited;                               // 0x0021(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC5[0x2];                                     // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         LocalStackBMax;                                    // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalStackBNum;                                    // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC6[0x4];                                     // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x0030(0x0118)(Edit, BlueprintVisible)
	class USkillInfoGaugeImagine_C*               LocalGaugeImagine;                                 // 0x0148(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LocalSlotId;                                       // 0x0150(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6EC7[0x4];                                     // 0x0154(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 LocalImagineUniqueId;                              // 0x0158(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x0168(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESkillActionPosition                          LocalSAP;                                          // 0x016C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x016D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x016E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_SetStackBIconOneItemBase_OutIsVisible;    // 0x016F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0170(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x0171(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0172(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0173(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindImagineMaster_bIsValid;               // 0x0174(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC8[0x3];                                     // 0x0175(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindImagineMaster_ImagineMaster;          // 0x0178(0x00B0)()
	bool                                          CallFunc_GetGaugeImagine_OutIsVaild;               // 0x0228(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6EC9[0x7];                                     // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeImagine_C*               CallFunc_GetGaugeImagine_OutGaugeImagine;          // 0x0230(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetMasterImagineText_ReturnValue;         // 0x0238(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0248(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon) == 0x000250, "Wrong size on SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InSkillActionPosition) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InImagineId) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InImagineId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InImagineUniqueId) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InStackBNum) == 0x000018, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InStackBNum' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InStackBMax) == 0x00001C, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InStackBMax' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, InIsTermLimited) == 0x000020, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::InIsTermLimited' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, bLocalIsTermLimited) == 0x000021, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::bLocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalStackBMax) == 0x000024, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalStackBMax' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalStackBNum) == 0x000028, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalStackBNum' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalOwnItemInfo) == 0x000030, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalGaugeImagine) == 0x000148, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalGaugeImagine' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalSlotId) == 0x000150, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalSlotId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalImagineUniqueId) == 0x000158, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalImagineUniqueId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalImagineId) == 0x000168, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalImagineId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, LocalSAP) == 0x00016C, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::LocalSAP' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, Temp_bool_Variable) == 0x00016D, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_IsValid_ReturnValue) == 0x00016E, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_SetStackBIconOneItemBase_OutIsVisible) == 0x00016F, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_SetStackBIconOneItemBase_OutIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_MakeLiteralByte_ReturnValue) == 0x000170, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x000171, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_IsValid_ReturnValue_1) == 0x000172, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, K2Node_Select_Default) == 0x000173, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_FindImagineMaster_bIsValid) == 0x000174, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_FindImagineMaster_bIsValid' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_FindImagineMaster_ImagineMaster) == 0x000178, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_FindImagineMaster_ImagineMaster' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_GetGaugeImagine_OutIsVaild) == 0x000228, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_GetGaugeImagine_OutIsVaild' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_GetGaugeImagine_OutGaugeImagine) == 0x000230, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_GetGaugeImagine_OutGaugeImagine' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_GetMasterImagineText_ReturnValue) == 0x000238, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_GetMasterImagineText_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon, CallFunc_Conv_StringToName_ReturnValue) == 0x000248, "Member 'SkillInfoIconForBattleImagine_C_UpdateBattleImagineIcon::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillEmptyColor
// 0x0028 (0x0028 - 0x0000)
struct SkillInfoIconForBattleImagine_C_InitSkillEmptyColor final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ECA[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGaugeImagine_OutIsVaild;               // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ECB[0x3];                                     // 0x0015(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeImagine_C*               CallFunc_GetGaugeImagine_OutGaugeImagine;          // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_InitSkillEmptyColor");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor) == 0x000028, "Wrong size on SkillInfoIconForBattleImagine_C_InitSkillEmptyColor");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor, InSkillActionPosition) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_InitSkillEmptyColor::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_InitSkillEmptyColor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor, CallFunc_GetGaugeImagine_OutIsVaild) == 0x000014, "Member 'SkillInfoIconForBattleImagine_C_InitSkillEmptyColor::CallFunc_GetGaugeImagine_OutIsVaild' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor, CallFunc_GetGaugeImagine_OutGaugeImagine) == 0x000018, "Member 'SkillInfoIconForBattleImagine_C_InitSkillEmptyColor::CallFunc_GetGaugeImagine_OutGaugeImagine' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillEmptyColor, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'SkillInfoIconForBattleImagine_C_InitSkillEmptyColor::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.InitSkillStopUpdate
// 0x0018 (0x0018 - 0x0000)
struct SkillInfoIconForBattleImagine_C_InitSkillStopUpdate final
{
public:
	ESkillActionPosition                          InSkillActionPosition;                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetGaugeImagine_OutIsVaild;               // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ECC[0x6];                                     // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkillInfoGaugeImagine_C*               CallFunc_GetGaugeImagine_OutGaugeImagine;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_InitSkillStopUpdate");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate) == 0x000018, "Wrong size on SkillInfoIconForBattleImagine_C_InitSkillStopUpdate");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate, InSkillActionPosition) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_InitSkillStopUpdate::InSkillActionPosition' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate, CallFunc_GetGaugeImagine_OutIsVaild) == 0x000001, "Member 'SkillInfoIconForBattleImagine_C_InitSkillStopUpdate::CallFunc_GetGaugeImagine_OutIsVaild' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate, CallFunc_GetGaugeImagine_OutGaugeImagine) == 0x000008, "Member 'SkillInfoIconForBattleImagine_C_InitSkillStopUpdate::CallFunc_GetGaugeImagine_OutGaugeImagine' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_InitSkillStopUpdate, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'SkillInfoIconForBattleImagine_C_InitSkillStopUpdate::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetStackBIconByOwnItemInfo
// 0x0120 (0x0120 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo final
{
public:
	struct FOwnItemInfo                           InOwnItemInfo;                                     // 0x0000(0x0118)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          Temp_bool_Variable;                                // 0x0118(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x0119(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Set_Stack_BIcon_One_Item_Visible;         // 0x011A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x011B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue_1;            // 0x011C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x011D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo) == 0x000120, "Wrong size on SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, InOwnItemInfo) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::InOwnItemInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, Temp_bool_Variable) == 0x000118, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue) == 0x000119, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, CallFunc_Set_Stack_BIcon_One_Item_Visible) == 0x00011A, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::CallFunc_Set_Stack_BIcon_One_Item_Visible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, CallFunc_IsValid_ReturnValue) == 0x00011B, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, CallFunc_MakeLiteralByte_ReturnValue_1) == 0x00011C, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::CallFunc_MakeLiteralByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo, K2Node_Select_Default) == 0x00011D, "Member 'SkillInfoIconForBattleImagine_C_SetStackBIconByOwnItemInfo::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBtnForPadCursorMoveVisible
// 0x0005 (0x0005 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible final
{
public:
	bool                                          InIsVisible;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Temp_bool_Variable;                                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible) == 0x000001, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible) == 0x000005, "Wrong size on SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible, InIsVisible) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible::InIsVisible' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible, Temp_bool_Variable) == 0x000001, "Member 'SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable) == 0x000002, "Member 'SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible, Temp_byte_Variable_1) == 0x000003, "Member 'SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible, K2Node_Select_Default) == 0x000004, "Member 'SkillInfoIconForBattleImagine_C_SetBtnForPadCursorMoveVisible::K2Node_Select_Default' has a wrong offset!");

// Function SkillInfoIconForBattleImagine.SkillInfoIconForBattleImagine_C.SetBattleImagineInfoForDhcBattle
// 0x04D8 (0x04D8 - 0x0000)
struct SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle final
{
public:
	struct FSBDhcBattlePlayerEquipImagineInfo     InBattleImagineInfo;                               // 0x0000(0x001C)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	ESBClassType                                  InClassType;                                       // 0x001C(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ECD[0x3];                                     // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         InClassLevel;                                      // 0x0020(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsTermLimited;                                // 0x0024(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ECE[0x3];                                     // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        LocalTooltipInfo;                                  // 0x0028(0x0078)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         LocalImagineId;                                    // 0x00A0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ECF[0x4];                                     // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           LocalOwnItemInfo;                                  // 0x00A8(0x0118)(Edit, BlueprintVisible)
	bool                                          LocalIsAlertIconOn;                                // 0x01C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESBClassType                                  LocalClassType;                                    // 0x01C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6ED0[0x2];                                     // 0x01C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBDhcBattlePlayerEquipImagineInfo     LocalBattleImagineInfo;                            // 0x01C4(0x001C)(Edit, BlueprintVisible, NoDestructor)
	int32                                         CallFunc_GetStackBMax_ReturnValue;                 // 0x01E0(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetItemLevel_ReturnValue;                 // 0x01E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_MakeLiteralBool_ReturnValue;              // 0x01E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED1[0x7];                                     // 0x01E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FST_ToolTipInfo                        K2Node_MakeStruct_ST_ToolTipInfo;                  // 0x01F0(0x0078)(HasGetValueTypeHash)
	class USBOwnItemListContainer*                CallFunc_GetCharacterStorage_ReturnValue;          // 0x0268(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0270(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED2[0x7];                                     // 0x0271(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBOwnItemListContainer*                CallFunc_GetEquipmentBag_ReturnValue;              // 0x0278(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0280(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist;         // 0x0281(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED3[0x6];                                     // 0x0282(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue;       // 0x0288(0x0118)(ConstParm)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x03A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_FindItem_ByUniqueId_bOutExist_1;       // 0x03A1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6ED4[0x6];                                     // 0x03A2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FOwnItemInfo                           CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1;     // 0x03A8(0x0118)(ConstParm)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x04C0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x04D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle) == 0x000008, "Wrong alignment on SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle");
static_assert(sizeof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle) == 0x0004D8, "Wrong size on SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, InBattleImagineInfo) == 0x000000, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::InBattleImagineInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, InClassType) == 0x00001C, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::InClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, InClassLevel) == 0x000020, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::InClassLevel' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalIsTermLimited) == 0x000024, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalIsTermLimited' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalTooltipInfo) == 0x000028, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalTooltipInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalImagineId) == 0x0000A0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalImagineId' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalOwnItemInfo) == 0x0000A8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalOwnItemInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalIsAlertIconOn) == 0x0001C0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalIsAlertIconOn' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalClassType) == 0x0001C1, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalClassType' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, LocalBattleImagineInfo) == 0x0001C4, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::LocalBattleImagineInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_GetStackBMax_ReturnValue) == 0x0001E0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_GetStackBMax_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_GetItemLevel_ReturnValue) == 0x0001E4, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_GetItemLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_MakeLiteralBool_ReturnValue) == 0x0001E8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_MakeLiteralBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, K2Node_MakeStruct_ST_ToolTipInfo) == 0x0001F0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::K2Node_MakeStruct_ST_ToolTipInfo' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_GetCharacterStorage_ReturnValue) == 0x000268, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_GetCharacterStorage_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_IsValid_ReturnValue) == 0x000270, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_GetEquipmentBag_ReturnValue) == 0x000278, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_GetEquipmentBag_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_IsValid_ReturnValue_1) == 0x000280, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_BP_FindItem_ByUniqueId_bOutExist) == 0x000281, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_BP_FindItem_ByUniqueId_bOutExist' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_BP_FindItem_ByUniqueId_ReturnValue) == 0x000288, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_BP_FindItem_ByUniqueId_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, K2Node_SwitchEnum_CmpSuccess) == 0x0003A0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_BP_FindItem_ByUniqueId_bOutExist_1) == 0x0003A1, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_BP_FindItem_ByUniqueId_bOutExist_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1) == 0x0003A8, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_BP_FindItem_ByUniqueId_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_Conv_NameToString_ReturnValue) == 0x0004C0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0004D0, "Member 'SkillInfoIconForBattleImagine_C_SetBattleImagineInfoForDhcBattle::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

}

