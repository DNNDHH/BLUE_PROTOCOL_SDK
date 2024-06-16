#pragma once

 

// Package: DescriptionWindow

#include "Basic.hpp"

#include "InventoryData_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "DescripionButtonType_structs.hpp"


namespace SDK::Params
{

// Function DescriptionWindow.DescriptionWindow_C.OnClickedButton__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_OnClickedButton__DelegateSignature final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DescriptionWindow_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong alignment on DescriptionWindow_C_OnClickedButton__DelegateSignature");
static_assert(sizeof(DescriptionWindow_C_OnClickedButton__DelegateSignature) == 0x000001, "Wrong size on DescriptionWindow_C_OnClickedButton__DelegateSignature");
static_assert(offsetof(DescriptionWindow_C_OnClickedButton__DelegateSignature, ButtonType) == 0x000000, "Member 'DescriptionWindow_C_OnClickedButton__DelegateSignature::ButtonType' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerButtonPressed__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(sizeof(DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000060, "Wrong size on DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(offsetof(DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponUniqueId) == 0x000000, "Member 'DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponItemData) == 0x000010, "Member 'DescriptionWindow_C_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponItemData' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.OnWeaponStickerInUseButtonPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong alignment on DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(sizeof(DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong size on DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(offsetof(DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature, InIsInUse) == 0x000000, "Member 'DescriptionWindow_C_OnWeaponStickerInUseButtonPressed__DelegateSignature::InIsInUse' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.ExecuteUbergraph_DescriptionWindow
// 0x00A0 (0x00A0 - 0x0000)
struct DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F1[0x3];                                     // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F2[0x3];                                     // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Variable_1;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	EDescripionButtonType                         K2Node_CustomEvent_ButtonType;                     // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78F3[0x6];                                     // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 K2Node_ComponentBoundEvent_InWeaponUniqueId;       // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      K2Node_ComponentBoundEvent_InWeaponItemData;       // 0x0030(0x0050)()
	int32                                         K2Node_Select_Default;                             // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default_1;                           // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_ComponentBoundEvent_InIsInUse;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F4[0x3];                                     // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(EDescripionButtonType ButtonType)> K2Node_CreateDelegate_OutputDelegate;              // 0x008C(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow) == 0x000008, "Wrong alignment on DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow");
static_assert(sizeof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow) == 0x0000A0, "Wrong size on DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, EntryPoint) == 0x000000, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, Temp_bool_Variable) == 0x000004, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, Temp_int_Variable) == 0x000008, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, Temp_bool_Variable_1) == 0x00000C, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, Temp_int_Variable_1) == 0x000010, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, Temp_int_Variable_2) == 0x000014, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_Event_IsDesignTime) == 0x000018, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_CustomEvent_ButtonType) == 0x000019, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_CustomEvent_ButtonType' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_ComponentBoundEvent_InWeaponUniqueId) == 0x000020, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_ComponentBoundEvent_InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_ComponentBoundEvent_InWeaponItemData) == 0x000030, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_ComponentBoundEvent_InWeaponItemData' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_Select_Default) == 0x000080, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_Select_Default_1) == 0x000084, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_ComponentBoundEvent_InIsInUse) == 0x000088, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_ComponentBoundEvent_InIsInUse' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow, K2Node_CreateDelegate_OutputDelegate) == 0x00008C, "Member 'DescriptionWindow_C_ExecuteUbergraph_DescriptionWindow::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong alignment on DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(sizeof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature) == 0x000001, "Wrong size on DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature");
static_assert(offsetof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature, InIsInUse) == 0x000000, "Member 'DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature::InIsInUse' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature
// 0x0060 (0x0060 - 0x0000)
struct DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature final
{
public:
	class FString                                 InWeaponUniqueId;                                  // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FSBWeaponItemData                      InWeaponItemData;                                  // 0x0010(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000008, "Wrong alignment on DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(sizeof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature) == 0x000060, "Wrong size on DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature");
static_assert(offsetof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponUniqueId) == 0x000000, "Member 'DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponUniqueId' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature, InWeaponItemData) == 0x000010, "Member 'DescriptionWindow_C_BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature::InWeaponItemData' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.OnButtonClicked_Bind
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_OnButtonClicked_Bind final
{
public:
	EDescripionButtonType                         ButtonType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DescriptionWindow_C_OnButtonClicked_Bind) == 0x000001, "Wrong alignment on DescriptionWindow_C_OnButtonClicked_Bind");
static_assert(sizeof(DescriptionWindow_C_OnButtonClicked_Bind) == 0x000001, "Wrong size on DescriptionWindow_C_OnButtonClicked_Bind");
static_assert(offsetof(DescriptionWindow_C_OnButtonClicked_Bind, ButtonType) == 0x000000, "Member 'DescriptionWindow_C_OnButtonClicked_Bind::ButtonType' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_PreConstruct) == 0x000001, "Wrong alignment on DescriptionWindow_C_PreConstruct");
static_assert(sizeof(DescriptionWindow_C_PreConstruct) == 0x000001, "Wrong size on DescriptionWindow_C_PreConstruct");
static_assert(offsetof(DescriptionWindow_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'DescriptionWindow_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetItem
// 0x0200 (0x0200 - 0x0000)
struct DescriptionWindow_C_SetItem final
{
public:
	struct FInventoryData                         InventoryData;                                     // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	struct FInventoryData                         LInventoryData;                                    // 0x0098(0x0098)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0130(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0131(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_GetMasterDataManager_IsValid;             // 0x0132(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F5[0x5];                                     // 0x0133(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBMasterDataManager*                   CallFunc_GetMasterDataManager_ReturnValue;         // 0x0138(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_FindMasterImagineData_IsExists;           // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F6[0x7];                                     // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterImagine                       CallFunc_FindMasterImagineData_ReturnValue;        // 0x0148(0x00B0)()
	bool                                          K2Node_SwitchEnum_CmpSuccess_1;                    // 0x01F8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_SetItem) == 0x000008, "Wrong alignment on DescriptionWindow_C_SetItem");
static_assert(sizeof(DescriptionWindow_C_SetItem) == 0x000200, "Wrong size on DescriptionWindow_C_SetItem");
static_assert(offsetof(DescriptionWindow_C_SetItem, InventoryData) == 0x000000, "Member 'DescriptionWindow_C_SetItem::InventoryData' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, LInventoryData) == 0x000098, "Member 'DescriptionWindow_C_SetItem::LInventoryData' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, K2Node_SwitchEnum_CmpSuccess) == 0x000130, "Member 'DescriptionWindow_C_SetItem::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000131, "Member 'DescriptionWindow_C_SetItem::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, CallFunc_GetMasterDataManager_IsValid) == 0x000132, "Member 'DescriptionWindow_C_SetItem::CallFunc_GetMasterDataManager_IsValid' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, CallFunc_GetMasterDataManager_ReturnValue) == 0x000138, "Member 'DescriptionWindow_C_SetItem::CallFunc_GetMasterDataManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, CallFunc_FindMasterImagineData_IsExists) == 0x000140, "Member 'DescriptionWindow_C_SetItem::CallFunc_FindMasterImagineData_IsExists' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, CallFunc_FindMasterImagineData_ReturnValue) == 0x000148, "Member 'DescriptionWindow_C_SetItem::CallFunc_FindMasterImagineData_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItem, K2Node_SwitchEnum_CmpSuccess_1) == 0x0001F8, "Member 'DescriptionWindow_C_SetItem::K2Node_SwitchEnum_CmpSuccess_1' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetItemLoadAfter
// 0x0028 (0x0028 - 0x0000)
struct DescriptionWindow_C_SetItemLoadAfter final
{
public:
	class UUMG_CaptureStudio_C*                   CaptureStudio;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EItemType                                     Selection;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F7[0x6];                                     // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_MannequinForCapture_Studio_C*       K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F8[0x7];                                     // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ASBCharaCreateCharacter*                CallFunc_GetActiveMannequin_AsSBChara_Create_Character; // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DescriptionWindow_C_SetItemLoadAfter) == 0x000008, "Wrong alignment on DescriptionWindow_C_SetItemLoadAfter");
static_assert(sizeof(DescriptionWindow_C_SetItemLoadAfter) == 0x000028, "Wrong size on DescriptionWindow_C_SetItemLoadAfter");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, CaptureStudio) == 0x000000, "Member 'DescriptionWindow_C_SetItemLoadAfter::CaptureStudio' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, Selection) == 0x000008, "Member 'DescriptionWindow_C_SetItemLoadAfter::Selection' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, K2Node_SwitchEnum_CmpSuccess) == 0x000009, "Member 'DescriptionWindow_C_SetItemLoadAfter::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio) == 0x000010, "Member 'DescriptionWindow_C_SetItemLoadAfter::K2Node_DynamicCast_AsBP_Mannequin_for_Capture_Studio' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'DescriptionWindow_C_SetItemLoadAfter::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetItemLoadAfter, CallFunc_GetActiveMannequin_AsSBChara_Create_Character) == 0x000020, "Member 'DescriptionWindow_C_SetItemLoadAfter::CallFunc_GetActiveMannequin_AsSBChara_Create_Character' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.Open
// 0x00A0 (0x00A0 - 0x0000)
struct DescriptionWindow_C_Open final
{
public:
	struct FInventoryData                         InventoryData;                                     // 0x0000(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(DescriptionWindow_C_Open) == 0x000008, "Wrong alignment on DescriptionWindow_C_Open");
static_assert(sizeof(DescriptionWindow_C_Open) == 0x0000A0, "Wrong size on DescriptionWindow_C_Open");
static_assert(offsetof(DescriptionWindow_C_Open, InventoryData) == 0x000000, "Member 'DescriptionWindow_C_Open::InventoryData' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_Open, CallFunc_PlayAnimation_ReturnValue) == 0x000098, "Member 'DescriptionWindow_C_Open::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetRegisterMode
// 0x0002 (0x0002 - 0x0000)
struct DescriptionWindow_C_SetRegisterMode final
{
public:
	bool                                          IsRegisterMode;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bMode;                                             // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_SetRegisterMode) == 0x000001, "Wrong alignment on DescriptionWindow_C_SetRegisterMode");
static_assert(sizeof(DescriptionWindow_C_SetRegisterMode) == 0x000002, "Wrong size on DescriptionWindow_C_SetRegisterMode");
static_assert(offsetof(DescriptionWindow_C_SetRegisterMode, IsRegisterMode) == 0x000000, "Member 'DescriptionWindow_C_SetRegisterMode::IsRegisterMode' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetRegisterMode, bMode) == 0x000001, "Member 'DescriptionWindow_C_SetRegisterMode::bMode' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.RefleshButton
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_RefleshButton final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_RefleshButton) == 0x000001, "Wrong alignment on DescriptionWindow_C_RefleshButton");
static_assert(sizeof(DescriptionWindow_C_RefleshButton) == 0x000001, "Wrong size on DescriptionWindow_C_RefleshButton");
static_assert(offsetof(DescriptionWindow_C_RefleshButton, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'DescriptionWindow_C_RefleshButton::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.IsClose
// 0x0003 (0x0003 - 0x0000)
struct DescriptionWindow_C_IsClose final
{
public:
	bool                                          bClose;                                            // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	ESlateVisibility                              CallFunc_GetVisibility_ReturnValue;                // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_IsClose) == 0x000001, "Wrong alignment on DescriptionWindow_C_IsClose");
static_assert(sizeof(DescriptionWindow_C_IsClose) == 0x000003, "Wrong size on DescriptionWindow_C_IsClose");
static_assert(offsetof(DescriptionWindow_C_IsClose, bClose) == 0x000000, "Member 'DescriptionWindow_C_IsClose::bClose' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_IsClose, CallFunc_GetVisibility_ReturnValue) == 0x000001, "Member 'DescriptionWindow_C_IsClose::CallFunc_GetVisibility_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_IsClose, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000002, "Member 'DescriptionWindow_C_IsClose::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetBagStorageViewMode
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_SetBagStorageViewMode final
{
public:
	bool                                          Param_bBagStorageViewMode;                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_SetBagStorageViewMode) == 0x000001, "Wrong alignment on DescriptionWindow_C_SetBagStorageViewMode");
static_assert(sizeof(DescriptionWindow_C_SetBagStorageViewMode) == 0x000001, "Wrong size on DescriptionWindow_C_SetBagStorageViewMode");
static_assert(offsetof(DescriptionWindow_C_SetBagStorageViewMode, Param_bBagStorageViewMode) == 0x000000, "Member 'DescriptionWindow_C_SetBagStorageViewMode::Param_bBagStorageViewMode' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsInUse
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse final
{
public:
	bool                                          InIsInUse;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse) == 0x000001, "Wrong alignment on DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse");
static_assert(sizeof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse) == 0x000001, "Wrong size on DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse");
static_assert(offsetof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse, InIsInUse) == 0x000000, "Member 'DescriptionWindow_C_SetWeaponStickerInUseButtonIsInUse::InIsInUse' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetWeaponStickerInUseButtonIsEnabled
// 0x0001 (0x0001 - 0x0000)
struct DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled final
{
public:
	bool                                          InIsEnabled;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled) == 0x000001, "Wrong alignment on DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled");
static_assert(sizeof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled) == 0x000001, "Wrong size on DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled");
static_assert(offsetof(DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled, InIsEnabled) == 0x000000, "Member 'DescriptionWindow_C_SetWeaponStickerInUseButtonIsEnabled::InIsEnabled' has a wrong offset!");

// Function DescriptionWindow.DescriptionWindow_C.SetMoveDescriptionWindow
// 0x0060 (0x0060 - 0x0000)
struct DescriptionWindow_C_SetMoveDescriptionWindow final
{
public:
	TArray<class UCanvasPanel*>                   List;                                              // 0x0000(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78F9[0x4];                                     // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCanvasPanel*                           CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0028(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78FA[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              CallFunc_GetPosition_ReturnValue;                  // 0x0034(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_X;                          // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakVector2D_Y;                          // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_MakeVector2D_ReturnValue;                 // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UCanvasPanel*>                   K2Node_MakeArray_Array;                            // 0x0050(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(DescriptionWindow_C_SetMoveDescriptionWindow) == 0x000008, "Wrong alignment on DescriptionWindow_C_SetMoveDescriptionWindow");
static_assert(sizeof(DescriptionWindow_C_SetMoveDescriptionWindow) == 0x000060, "Wrong size on DescriptionWindow_C_SetMoveDescriptionWindow");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, List) == 0x000000, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::List' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, Temp_int_Array_Index_Variable) == 0x000014, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_Array_Get_Item) == 0x000020, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000028, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_GetPosition_ReturnValue) == 0x000034, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_GetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_BreakVector2D_X) == 0x00003C, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_BreakVector2D_Y) == 0x000040, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, CallFunc_MakeVector2D_ReturnValue) == 0x000048, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::CallFunc_MakeVector2D_ReturnValue' has a wrong offset!");
static_assert(offsetof(DescriptionWindow_C_SetMoveDescriptionWindow, K2Node_MakeArray_Array) == 0x000050, "Member 'DescriptionWindow_C_SetMoveDescriptionWindow::K2Node_MakeArray_Array' has a wrong offset!");

}

