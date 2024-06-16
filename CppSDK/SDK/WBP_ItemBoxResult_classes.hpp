#pragma once

 

// Package: WBP_ItemBoxResult

#include "Basic.hpp"

#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBoxResult.WBP_ItemBoxResult_C
// 0x0338 (0x05E8 - 0x02B0)
class UWBP_ItemBoxResult_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            ButtonAgain;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            ButtonOk;                                          // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HBox_Disappearance;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconWarning2;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_84;                                          // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_174;                                         // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_253;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_331;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_371;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line3;                                             // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Ok;                                                // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Disappearance;                                 // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title;                                         // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_1;                                       // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title_2;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxImage_C*                    WBP_ItemBoxImage;                                  // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemResultItemGroup_C*             WBP_ItemResult_EquipmentBag;                       // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemResultItemGroup_C*             WBP_ItemResult_ItemBag;                            // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemResultItemGroup_C*             WBP_ItemResult_ItemStorage;                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemResultItemGroup_C*             WBP_ItemResult_Other;                              // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnHide;                                            // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	ENumberInputDialogResult                      Result;                                            // 0x03D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatPlusButton;                                  // 0x03D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatMinusButton;                                 // 0x03D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C2A[0x5];                                     // 0x03D3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUserWidget*                          MainWidget;                                        // 0x03D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x03E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5C2B[0x7];                                     // 0x03E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnNumSliderUpdeta;                                 // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<EItemType>                             SelecttemType;                                     // 0x03F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 SelectItemID;                                      // 0x0408(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x0418(0x0060)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSBStorageItemBoxResultData            StorageItemBoxResultData;                          // 0x0478(0x0108)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          bStorageMode;                                      // 0x0580(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                         Pad_5C2C[0x7];                                     // 0x0581(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FInventoryItemData                     NextItemData;                                      // 0x0588(0x0060)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void OnHide__DelegateSignature(ENumberInputDialogResult InResult, const struct FInventoryItemData& NewParam);
	void OnNumSliderUpdeta__DelegateSignature(int32 Value, class UNumberInputDialog_C* CallerDialg);
	void ExecuteUbergraph_WBP_ItemBoxResult(int32 EntryPoint);
	void BndEvt__WBP_ItemBoxResult_SBButtonTransparent_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_ItemBoxResult_CmnClose02_K2Node_ComponentBoundEvent_2_OnClosed__DelegateSignature();
	void SetTitleName();
	void BndEvt__Button1_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ButtonAgain_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetDisappearanceText();
	void SettingButtonAgain();
	void CreateResultList();
	void BndEvt__Button1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void Destruct();
	void HideDialog(bool bPlayCloseSe);
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDestructMainWidget();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_Cancel();
	void CreateBagList();
	void CreateStorageList();
	void SearchSettingAgainItem(bool IsBag, bool* Param_Result, struct FInventoryItemData* IconData);
	void CreateItemScrollList();
	void GetSettingAgainItem(bool* Param_Result, struct FInventoryItemData* IconData);
	void Is_Disappearance(bool* bDisappearance);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBoxResult_C">();
	}
	static class UWBP_ItemBoxResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBoxResult_C>();
	}
};
static_assert(alignof(UWBP_ItemBoxResult_C) == 0x000008, "Wrong alignment on UWBP_ItemBoxResult_C");
static_assert(sizeof(UWBP_ItemBoxResult_C) == 0x0005E8, "Wrong size on UWBP_ItemBoxResult_C");
static_assert(offsetof(UWBP_ItemBoxResult_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_ItemBoxResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, AnimOut) == 0x0002B8, "Member 'UWBP_ItemBoxResult_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, AnimIn) == 0x0002C0, "Member 'UWBP_ItemBoxResult_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, ButtonAgain) == 0x0002C8, "Member 'UWBP_ItemBoxResult_C::ButtonAgain' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, ButtonOk) == 0x0002D0, "Member 'UWBP_ItemBoxResult_C::ButtonOk' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, CmnClose02) == 0x0002D8, "Member 'UWBP_ItemBoxResult_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, HBox_Disappearance) == 0x0002E0, "Member 'UWBP_ItemBoxResult_C::HBox_Disappearance' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, IconWarning2) == 0x0002E8, "Member 'UWBP_ItemBoxResult_C::IconWarning2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image) == 0x0002F0, "Member 'UWBP_ItemBoxResult_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_1) == 0x0002F8, "Member 'UWBP_ItemBoxResult_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_2) == 0x000300, "Member 'UWBP_ItemBoxResult_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_3) == 0x000308, "Member 'UWBP_ItemBoxResult_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_4) == 0x000310, "Member 'UWBP_ItemBoxResult_C::Image_4' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_84) == 0x000318, "Member 'UWBP_ItemBoxResult_C::Image_84' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_174) == 0x000320, "Member 'UWBP_ItemBoxResult_C::Image_174' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_253) == 0x000328, "Member 'UWBP_ItemBoxResult_C::Image_253' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_331) == 0x000330, "Member 'UWBP_ItemBoxResult_C::Image_331' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Image_371) == 0x000338, "Member 'UWBP_ItemBoxResult_C::Image_371' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Line2) == 0x000340, "Member 'UWBP_ItemBoxResult_C::Line2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Line3) == 0x000348, "Member 'UWBP_ItemBoxResult_C::Line3' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Ok) == 0x000350, "Member 'UWBP_ItemBoxResult_C::Ok' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, SBButtonTransparent) == 0x000358, "Member 'UWBP_ItemBoxResult_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Txt1_1) == 0x000360, "Member 'UWBP_ItemBoxResult_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Txt_Disappearance) == 0x000368, "Member 'UWBP_ItemBoxResult_C::Txt_Disappearance' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Txt_Title) == 0x000370, "Member 'UWBP_ItemBoxResult_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Txt_Title_1) == 0x000378, "Member 'UWBP_ItemBoxResult_C::Txt_Title_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Txt_Title_2) == 0x000380, "Member 'UWBP_ItemBoxResult_C::Txt_Title_2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, UIBlocker) == 0x000388, "Member 'UWBP_ItemBoxResult_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, UIBlocker2) == 0x000390, "Member 'UWBP_ItemBoxResult_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, WBP_ItemBoxImage) == 0x000398, "Member 'UWBP_ItemBoxResult_C::WBP_ItemBoxImage' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, WBP_ItemResult_EquipmentBag) == 0x0003A0, "Member 'UWBP_ItemBoxResult_C::WBP_ItemResult_EquipmentBag' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, WBP_ItemResult_ItemBag) == 0x0003A8, "Member 'UWBP_ItemBoxResult_C::WBP_ItemResult_ItemBag' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, WBP_ItemResult_ItemStorage) == 0x0003B0, "Member 'UWBP_ItemBoxResult_C::WBP_ItemResult_ItemStorage' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, WBP_ItemResult_Other) == 0x0003B8, "Member 'UWBP_ItemBoxResult_C::WBP_ItemResult_Other' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, OnHide) == 0x0003C0, "Member 'UWBP_ItemBoxResult_C::OnHide' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, Result) == 0x0003D0, "Member 'UWBP_ItemBoxResult_C::Result' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, RepeatPlusButton) == 0x0003D1, "Member 'UWBP_ItemBoxResult_C::RepeatPlusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, RepeatMinusButton) == 0x0003D2, "Member 'UWBP_ItemBoxResult_C::RepeatMinusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, MainWidget) == 0x0003D8, "Member 'UWBP_ItemBoxResult_C::MainWidget' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, IsClosing) == 0x0003E0, "Member 'UWBP_ItemBoxResult_C::IsClosing' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, OnNumSliderUpdeta) == 0x0003E8, "Member 'UWBP_ItemBoxResult_C::OnNumSliderUpdeta' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, SelecttemType) == 0x0003F8, "Member 'UWBP_ItemBoxResult_C::SelecttemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, SelectItemID) == 0x000408, "Member 'UWBP_ItemBoxResult_C::SelectItemID' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, InventoryItemData) == 0x000418, "Member 'UWBP_ItemBoxResult_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, StorageItemBoxResultData) == 0x000478, "Member 'UWBP_ItemBoxResult_C::StorageItemBoxResultData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, bStorageMode) == 0x000580, "Member 'UWBP_ItemBoxResult_C::bStorageMode' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBoxResult_C, NextItemData) == 0x000588, "Member 'UWBP_ItemBoxResult_C::NextItemData' has a wrong offset!");

}

