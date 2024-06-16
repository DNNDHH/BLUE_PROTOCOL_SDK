#pragma once

 

// Package: DescriptionWindow

#include "Basic.hpp"

#include "DescripionButtonType_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "E_DescriptionWindowType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass DescriptionWindow.DescriptionWindow_C
// 0x0120 (0x0398 - 0x0278)
class UDescriptionWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWBP_InventoryActiveImagineDescription_C* ActiveImagineDescription;                          // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryCostumeDescription_C*     CostumeDescription;                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Display;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryWeaponDescription_C*      EquipDescription;                                  // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryItemBagStorageDescription_C* InventoryItemBagStorageDescription;                // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryItemDescription_C*        ItemDescription;                                   // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryMountImagineDescription_C* MountImagineDescription;                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryOrnamentDescription_C*    OrnamentDescription;                               // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_InventoryPassiveImagineDescription_C* PassiveImagineDescription;                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           WindowAll;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClickedButton;                                   // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	E_DescriptionWindowType                       NowInventoryType;                                  // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_78EE[0x7];                                     // 0x02E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       NowAnim;                                           // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryItemData                     DispItemData;                                      // 0x02F8(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          bStorageMode;                                      // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bBP_PointOption;                                   // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bBagStorageViewMode;                               // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78EF[0x5];                                     // 0x035B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnWeaponStickerButtonPressed;                      // 0x0360(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnWeaponStickerInUseButtonPressed;                 // 0x0370(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bMoveDescriptionGrp;                               // 0x0380(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_78F0[0x3];                                     // 0x0381(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PreviewIndex;                                      // 0x0384(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<float>                                 MoveDescriptionGrpPositionY;                       // 0x0388(0x0010)(Edit, BlueprintVisible)

public:
	void OnClickedButton__DelegateSignature(EDescripionButtonType ButtonType);
	void OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
	void OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
	void ExecuteUbergraph_DescriptionWindow(int32 EntryPoint);
	void BndEvt__EquipDescription_K2Node_ComponentBoundEvent_1_OnWeaponStickerInUseButtonPressed__DelegateSignature(bool InIsInUse);
	void BndEvt__EquipDescription_K2Node_ComponentBoundEvent_0_OnWeaponStickerButtonPressed__DelegateSignature(const class FString& InWeaponUniqueId, const struct FSBWeaponItemData& InWeaponItemData);
	void OnButtonClicked_Bind(EDescripionButtonType ButtonType);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetItem(struct FInventoryData& InventoryData);
	void SetItemLoadAfter(class UUMG_CaptureStudio_C* CaptureStudio, EItemType Selection);
	void Open(const struct FInventoryData& InventoryData);
	void Close();
	void SetRegisterMode(bool IsRegisterMode);
	void RefleshButton();
	void IsClose(bool* bClose);
	void SetBagStorageViewMode(bool Param_bBagStorageViewMode);
	void SetWeaponStickerInUseButtonIsInUse(bool InIsInUse);
	void SetWeaponStickerInUseButtonIsEnabled(bool InIsEnabled);
	void SetMoveDescriptionWindow();
	void Refresh();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DescriptionWindow_C">();
	}
	static class UDescriptionWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDescriptionWindow_C>();
	}
};
static_assert(alignof(UDescriptionWindow_C) == 0x000008, "Wrong alignment on UDescriptionWindow_C");
static_assert(sizeof(UDescriptionWindow_C) == 0x000398, "Wrong size on UDescriptionWindow_C");
static_assert(offsetof(UDescriptionWindow_C, UberGraphFrame) == 0x000278, "Member 'UDescriptionWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, AnimIn) == 0x000280, "Member 'UDescriptionWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, ActiveImagineDescription) == 0x000288, "Member 'UDescriptionWindow_C::ActiveImagineDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, CostumeDescription) == 0x000290, "Member 'UDescriptionWindow_C::CostumeDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, Display) == 0x000298, "Member 'UDescriptionWindow_C::Display' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, EquipDescription) == 0x0002A0, "Member 'UDescriptionWindow_C::EquipDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, InventoryItemBagStorageDescription) == 0x0002A8, "Member 'UDescriptionWindow_C::InventoryItemBagStorageDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, ItemDescription) == 0x0002B0, "Member 'UDescriptionWindow_C::ItemDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, MountImagineDescription) == 0x0002B8, "Member 'UDescriptionWindow_C::MountImagineDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, OrnamentDescription) == 0x0002C0, "Member 'UDescriptionWindow_C::OrnamentDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, PassiveImagineDescription) == 0x0002C8, "Member 'UDescriptionWindow_C::PassiveImagineDescription' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, WindowAll) == 0x0002D0, "Member 'UDescriptionWindow_C::WindowAll' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, OnClickedButton) == 0x0002D8, "Member 'UDescriptionWindow_C::OnClickedButton' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, NowInventoryType) == 0x0002E8, "Member 'UDescriptionWindow_C::NowInventoryType' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, NowAnim) == 0x0002F0, "Member 'UDescriptionWindow_C::NowAnim' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, DispItemData) == 0x0002F8, "Member 'UDescriptionWindow_C::DispItemData' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, bStorageMode) == 0x000358, "Member 'UDescriptionWindow_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, bBP_PointOption) == 0x000359, "Member 'UDescriptionWindow_C::bBP_PointOption' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, bBagStorageViewMode) == 0x00035A, "Member 'UDescriptionWindow_C::bBagStorageViewMode' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, OnWeaponStickerButtonPressed) == 0x000360, "Member 'UDescriptionWindow_C::OnWeaponStickerButtonPressed' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, OnWeaponStickerInUseButtonPressed) == 0x000370, "Member 'UDescriptionWindow_C::OnWeaponStickerInUseButtonPressed' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, bMoveDescriptionGrp) == 0x000380, "Member 'UDescriptionWindow_C::bMoveDescriptionGrp' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, PreviewIndex) == 0x000384, "Member 'UDescriptionWindow_C::PreviewIndex' has a wrong offset!");
static_assert(offsetof(UDescriptionWindow_C, MoveDescriptionGrpPositionY) == 0x000388, "Member 'UDescriptionWindow_C::MoveDescriptionGrpPositionY' has a wrong offset!");

}

