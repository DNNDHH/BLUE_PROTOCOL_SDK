#pragma once

 

// Package: CraftList

#include "Basic.hpp"

#include "CraftRecepiSortType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "ItemListData_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CraftList.CraftList_C
// 0x0320 (0x0598 - 0x0278)
class UCraftList_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USBButton_C*                            Btn_DiffWeapon;                                    // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_RateDisplay;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ReadyCraft;                                    // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Btn_ReadyCraftText;                                // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasConstruct;                                   // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasRadyCraft;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                        CategoryDropDown;                                  // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_Craftable;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraft_StorageSelector_C*               Craft_StorageSelector;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           CraftableItems;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ShowDiffWeaon;                                 // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_ShowRatioBtn;                                  // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           DescPanel;                                         // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_13;                                          // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow;                                       // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCategoryBG;                                   // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderItemCraft;                                // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderWeaponCraft;                              // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Load;                                              // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultipleCraftWidget_C*                 MultipleCraftWidget;                               // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ProbabilityDisplayText;                            // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SelectItemMsgText;                                 // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     SortDropDown;                                      // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_BigBonusRate;                                  // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Diff;                                          // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUseTokenSelector_C*                    UseTokenSelector;                                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_HeaderImg;                                      // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCraftRecepiDesc_C*                     RecepiDesc;                                        // 0x0378(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0380(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             SelectRecepi;                                      // 0x0390(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             ChengePointValidate;                               // 0x03A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UCraftRecepiItem_C*                     SelectedItem;                                      // 0x03B0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             ShowNpcCraftBtn;                                   // 0x03B8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UShopCmnBtn1_C*                         SelectedCategoryTab;                               // 0x03C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FItemListData>                  ListData;                                          // 0x03D0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         MaxDifficulty;                                     // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsWeaponShowed;                                    // 0x03E4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5260[0x3];                                     // 0x03E5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         FillterDifficulty;                                 // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsItem;                                           // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5261[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ESBWeaponType>            WeaponTypes;                                       // 0x03F0(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBWeaponType                                 FillterWeaponType;                                 // 0x0440(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5262[0x3];                                     // 0x0441(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CraftNum;                                          // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECraftRecepiSortType                          SortType;                                          // 0x0448(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5263[0x7];                                     // 0x0449(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ECraftRecepiSortType>     SortTypes;                                         // 0x0450(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FFilterGroup>                   Filters;                                           // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             ChangeTabs;                                        // 0x04B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         StorageType;                                       // 0x04C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharacterCraftRecepi                  Select_Recepi;                                     // 0x04C4(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_5264[0x4];                                     // 0x04CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FCraftMasterData                       CraftMasterData;                                   // 0x04D0(0x0088)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             SetCancelLock;                                     // 0x0558(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UProbabilityDisplay_C*                  ProbabilityDisplayDialog;                          // 0x0568(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UEquipmentDiffDialog_C*                 EquipmentDiffDialog;                               // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             SetColorChangeMoney;                               // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         PreCraftCount;                                     // 0x0588(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5265[0x4];                                     // 0x058C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Dialog_C*                           Dialog;                                            // 0x0590(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void SelectRecepi__DelegateSignature(const struct FCharacterCraftRecepi& Recepi);
	void ChengePointValidate__DelegateSignature();
	void ShowNpcCraftBtn__DelegateSignature(bool bShow);
	void ChangeTabs__DelegateSignature();
	void SetCancelLock__DelegateSignature(bool LockInput);
	void SetColorChangeMoney__DelegateSignature(bool WhiteColor);
	void ExecuteUbergraph_CraftList(int32 EntryPoint);
	void BndEvt__CraftList_CB_Craftable_K2Node_ComponentBoundEvent_13_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnConditionCreated(EDialogResult Result);
	void OnOverflowAccepted(EDialogResult Result);
	void OnDialogClosed(EDialogResult Result);
	void BndEvt__CraftList_UseTokenSelector_K2Node_ComponentBoundEvent_12_OnTokenSelectUpdate__DelegateSignature();
	void OnCloseDiffDialog();
	void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CraftList_Btn_DiffWeapon_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
	void ProbabilityOnClose();
	void ShowRateDialog();
	void BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CraftList_Btn_RateDisplay_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CraftList_SBButton_C_62_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnCompletGetRewardBoost(int32 InRetCode);
	void OnCanceled();
	void OnCloseClassCheck(EDialogResult Result);
	void OnTokenDemanded(EDialogResult Result);
	void OnSelected(int32 Selected);
	void OnCompl_Multi(int32 ErrorCode, const bool IsCritical, const TArray<class FString>& ItemUniqueids, int32 CriticalNum, bool IsFail, int32 TotalAmount, const TArray<bool>& Criticals, const int32 SaleAmount, const int32 SaleProfits);
	void OnCompl_PlayerRequest(int32 ErrorCode, const bool IsSuccess, const bool IsCritical, const class FString& ItemUniqueId, const int32 TotalAmount, const int32 SaleAmount, const int32 SaleProfits);
	void Destruct();
	void RestSelected();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_5_EventClicked__DelegateSignature();
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void BndEvt__MultipleCraftWidget_K2Node_ComponentBoundEvent_1_OnCreateNumChanged__DelegateSignature(int32 Now);
	void BndEvt__CategoryDropDown_K2Node_ComponentBoundEvent_6_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType);
	void EndEasyRedayCheckYesNoDialog(EDialogResult Result);
	void OnSelectDifficulty(const class FString& Param_SelectedItem, ESelectInfo SelectionType);
	void OnSelectRecepi(const struct FCharacterCraftRecepi& Param_SelectRecepi, class UCraftRecepiItem_C* Param_SelectedItem);
	void BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_ReadyCraft_K2Node_ComponentBoundEvent_46_OnButtonClickedEvent__DelegateSignature();
	void InitList(const TArray<struct FCharacterCraftRecepi>& InputPin);
	void Construct();
	void SetupItemList(bool Param_IsWeaponShowed);
	void CreateSortType();
	void FilterItems();
	void IsRecepiMaterialLocked(bool* OutIsLocked);
	void ShowRedayCheckYesNoDialog(class UBP_Dialog_C** OutIsDialog);
	class UWidget* On_DifficultyDropDown_GenerateWidget_0(const class FString& Item);
	class UWidget* On_CategoryDropDown_GenerateWidget_0(const class FString& Item);
	void SetupCategoryList(bool bIsWeapon1);
	void GenerateSortedIndexes(TArray<struct FCharacterCraftRecepi>& Resepis, TArray<int32>* Indexes);
	void GenerateLists(const TArray<struct FCharacterCraftRecepi>& InputPin);
	void FilterLists(TArray<struct FFilterGroup>& Array);
	void ConvertSortType(ESBItemSortType SaveType, ECraftRecepiSortType* UseType);
	void ConvertSaveType(ECraftRecepiSortType UseType, ESBItemSortType* SaveType);
	void GetLastCraftStorage(int32* Param_StorageType);
	void GetCraftNum(int32* Num);
	void SetWeaponShow(bool Param_IsWeaponShowed);
	void UpdateRatio(int32 RecepiId);
	void InitCheckBox();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CraftList_C">();
	}
	static class UCraftList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCraftList_C>();
	}
};
static_assert(alignof(UCraftList_C) == 0x000008, "Wrong alignment on UCraftList_C");
static_assert(sizeof(UCraftList_C) == 0x000598, "Wrong size on UCraftList_C");
static_assert(offsetof(UCraftList_C, UberGraphFrame) == 0x000278, "Member 'UCraftList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Btn_DiffWeapon) == 0x000280, "Member 'UCraftList_C::Btn_DiffWeapon' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Btn_RateDisplay) == 0x000288, "Member 'UCraftList_C::Btn_RateDisplay' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Btn_ReadyCraft) == 0x000290, "Member 'UCraftList_C::Btn_ReadyCraft' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Btn_ReadyCraftText) == 0x000298, "Member 'UCraftList_C::Btn_ReadyCraftText' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CanvasConstruct) == 0x0002A0, "Member 'UCraftList_C::CanvasConstruct' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CanvasRadyCraft) == 0x0002A8, "Member 'UCraftList_C::CanvasRadyCraft' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CategoryDropDown) == 0x0002B0, "Member 'UCraftList_C::CategoryDropDown' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CB_Craftable) == 0x0002B8, "Member 'UCraftList_C::CB_Craftable' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CmnBack01) == 0x0002C0, "Member 'UCraftList_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CmnImageThrobber) == 0x0002C8, "Member 'UCraftList_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Craft_StorageSelector) == 0x0002D0, "Member 'UCraftList_C::Craft_StorageSelector' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CraftableItems) == 0x0002D8, "Member 'UCraftList_C::CraftableItems' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Cvs_ShowDiffWeaon) == 0x0002E0, "Member 'UCraftList_C::Cvs_ShowDiffWeaon' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Cvs_ShowRatioBtn) == 0x0002E8, "Member 'UCraftList_C::Cvs_ShowRatioBtn' has a wrong offset!");
static_assert(offsetof(UCraftList_C, DescPanel) == 0x0002F0, "Member 'UCraftList_C::DescPanel' has a wrong offset!");
static_assert(offsetof(UCraftList_C, FilterButton) == 0x0002F8, "Member 'UCraftList_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Image_13) == 0x000300, "Member 'UCraftList_C::Image_13' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Image_Arrow) == 0x000308, "Member 'UCraftList_C::Image_Arrow' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ImageCategoryBG) == 0x000310, "Member 'UCraftList_C::ImageCategoryBG' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ImgHeaderItemCraft) == 0x000318, "Member 'UCraftList_C::ImgHeaderItemCraft' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ImgHeaderWeaponCraft) == 0x000320, "Member 'UCraftList_C::ImgHeaderWeaponCraft' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Load) == 0x000328, "Member 'UCraftList_C::Load' has a wrong offset!");
static_assert(offsetof(UCraftList_C, MultipleCraftWidget) == 0x000330, "Member 'UCraftList_C::MultipleCraftWidget' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ProbabilityDisplayText) == 0x000338, "Member 'UCraftList_C::ProbabilityDisplayText' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SelectItemMsgText) == 0x000340, "Member 'UCraftList_C::SelectItemMsgText' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SortDropDown) == 0x000348, "Member 'UCraftList_C::SortDropDown' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Txt_BigBonusRate) == 0x000350, "Member 'UCraftList_C::Txt_BigBonusRate' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Txt_Diff) == 0x000358, "Member 'UCraftList_C::Txt_Diff' has a wrong offset!");
static_assert(offsetof(UCraftList_C, UIBlocker) == 0x000360, "Member 'UCraftList_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UCraftList_C, UseTokenSelector) == 0x000368, "Member 'UCraftList_C::UseTokenSelector' has a wrong offset!");
static_assert(offsetof(UCraftList_C, WS_HeaderImg) == 0x000370, "Member 'UCraftList_C::WS_HeaderImg' has a wrong offset!");
static_assert(offsetof(UCraftList_C, RecepiDesc) == 0x000378, "Member 'UCraftList_C::RecepiDesc' has a wrong offset!");
static_assert(offsetof(UCraftList_C, OnClose) == 0x000380, "Member 'UCraftList_C::OnClose' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SelectRecepi) == 0x000390, "Member 'UCraftList_C::SelectRecepi' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ChengePointValidate) == 0x0003A0, "Member 'UCraftList_C::ChengePointValidate' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SelectedItem) == 0x0003B0, "Member 'UCraftList_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ShowNpcCraftBtn) == 0x0003B8, "Member 'UCraftList_C::ShowNpcCraftBtn' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SelectedCategoryTab) == 0x0003C8, "Member 'UCraftList_C::SelectedCategoryTab' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ListData) == 0x0003D0, "Member 'UCraftList_C::ListData' has a wrong offset!");
static_assert(offsetof(UCraftList_C, MaxDifficulty) == 0x0003E0, "Member 'UCraftList_C::MaxDifficulty' has a wrong offset!");
static_assert(offsetof(UCraftList_C, IsWeaponShowed) == 0x0003E4, "Member 'UCraftList_C::IsWeaponShowed' has a wrong offset!");
static_assert(offsetof(UCraftList_C, FillterDifficulty) == 0x0003E8, "Member 'UCraftList_C::FillterDifficulty' has a wrong offset!");
static_assert(offsetof(UCraftList_C, bIsItem) == 0x0003EC, "Member 'UCraftList_C::bIsItem' has a wrong offset!");
static_assert(offsetof(UCraftList_C, WeaponTypes) == 0x0003F0, "Member 'UCraftList_C::WeaponTypes' has a wrong offset!");
static_assert(offsetof(UCraftList_C, FillterWeaponType) == 0x000440, "Member 'UCraftList_C::FillterWeaponType' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CraftNum) == 0x000444, "Member 'UCraftList_C::CraftNum' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SortType) == 0x000448, "Member 'UCraftList_C::SortType' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SortTypes) == 0x000450, "Member 'UCraftList_C::SortTypes' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Filters) == 0x0004A0, "Member 'UCraftList_C::Filters' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ChangeTabs) == 0x0004B0, "Member 'UCraftList_C::ChangeTabs' has a wrong offset!");
static_assert(offsetof(UCraftList_C, StorageType) == 0x0004C0, "Member 'UCraftList_C::StorageType' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Select_Recepi) == 0x0004C4, "Member 'UCraftList_C::Select_Recepi' has a wrong offset!");
static_assert(offsetof(UCraftList_C, CraftMasterData) == 0x0004D0, "Member 'UCraftList_C::CraftMasterData' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SetCancelLock) == 0x000558, "Member 'UCraftList_C::SetCancelLock' has a wrong offset!");
static_assert(offsetof(UCraftList_C, ProbabilityDisplayDialog) == 0x000568, "Member 'UCraftList_C::ProbabilityDisplayDialog' has a wrong offset!");
static_assert(offsetof(UCraftList_C, EquipmentDiffDialog) == 0x000570, "Member 'UCraftList_C::EquipmentDiffDialog' has a wrong offset!");
static_assert(offsetof(UCraftList_C, SetColorChangeMoney) == 0x000578, "Member 'UCraftList_C::SetColorChangeMoney' has a wrong offset!");
static_assert(offsetof(UCraftList_C, PreCraftCount) == 0x000588, "Member 'UCraftList_C::PreCraftCount' has a wrong offset!");
static_assert(offsetof(UCraftList_C, Dialog) == 0x000590, "Member 'UCraftList_C::Dialog' has a wrong offset!");

}

