#pragma once

 

// Package: ImagineCraft

#include "Basic.hpp"

#include "Filter_Type_structs.hpp"
#include "CraftRecepiSortType_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ImagineCraft.ImagineCraft_C
// 0x01E8 (0x0498 - 0x02B0)
class UImagineCraft_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       ArrowInAnim;                                       // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_Craft;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_4;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasRadyUpgrade_1;                               // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_FilterCraftable;                                // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_Sort;                                          // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_ArrowM_C*                      CmnAnim_ArrowM;                                    // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack;                                           // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtnWishListWhite_C*                 CmnBtnWishListWhite;                               // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_FilterSelector;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_LackAdvRank;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          Cvs_LiquidMemory;                                  // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Cvs_Timelimited;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFilterButton_C*                        FilterButton;                                      // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Help;                                              // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_194;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageCategoryBG;                                   // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageWhiteBG;                                      // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftAnim_C*                    ImagineCraftAnim;                                  // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftDesc_C*                    ImagineCraftDesc;                                  // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImagineCraftResult_C*                  ImagineCraftResult;                                // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderBattleImagine;                            // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImgHeaderEnhanceImagine;                           // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Load;                                              // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_Craft_InAnime_C*              ShopMenu_Craft_InAnime;                            // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sz_RequireAdvRank;                                 // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Sz_SelectRecepi;                                   // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VT_RecepiBOx;                                      // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_HeaderImg;                                      // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FMasterImagineRecepi                   Selected;                                          // 0x03D0(0x0038)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsInitialized;                                     // 0x0408(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50CE[0x7];                                     // 0x0409(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFilterGroup>                   Filters;                                           // 0x0410(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class URecepiListItemBtn_C*>           RecepiItems;                                       // 0x0420(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	ESBImagineCategoryType                        ShowType;                                          // 0x0430(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_50CF[0x7];                                     // 0x0431(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ECraftRecepiSortType>     SortFromEnum;                                      // 0x0438(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	ECraftRecepiSortType                          SortType;                                          // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsCloseBlocked;                                    // 0x0489(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          AnimVar;                                           // 0x048A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50D0[0x1];                                     // 0x048B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StorageNo;                                         // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DStudio_Desc;                                      // 0x0490(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          DStudio_Result;                                    // 0x0491(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_ImagineCraft(int32 EntryPoint);
	void BndEvt__ImagineCraft_CB_FilterCraftable_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__ImagineCraft_CmnBtnWishListWhite_K2Node_ComponentBoundEvent_2_EventOnClicked__DelegateSignature();
	void OnRequest_GetRewaedBoost_cmpl(int32 InRetCode);
	void UpdateLiquidMemoryDisp();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void CheckSelectRecepi();
	void ChgHelpMode(bool IsLackAdvRank);
	void ShowHelp(bool Visible);
	void BndEvt__imagineCraftAnim_K2Node_ComponentBoundEvent_7_OnAnimFinished__DelegateSignature();
	void BndEvt__ImagineCraftResult_K2Node_ComponentBoundEvent_6_OnClosed__DelegateSignature(bool IsCloseAll);
	void Destruct();
	void RegenerateList(int32 RetCode);
	void OnFinished(int32 RetCode, const class FString& MakedUID);
	void Terminate();
	void Initialize();
	void Close();
	void Open();
	void OnSelectRecepi(const struct FMasterImagineRecepi& Recepi, class URecepiListItemBtn_C* SelectedItem);
	void Construct();
	void OnLimitSerlected(EDialogResult Result);
	void BndEvt__CmnBtn16_1_K2Node_ComponentBoundEvent_11_EventOnClicked__DelegateSignature();
	void OnSelectDialog(EDialogResult Result);
	void OnPress_Cancel();
	void BndEvt__CmnBack_K2Node_ComponentBoundEvent_13_EventClicked__DelegateSignature();
	void BndEvt__Cmb_Sort_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void BndEvt__FilterButton_K2Node_ComponentBoundEvent_2_OnApplyFilter__DelegateSignature(TArray<struct FFilterGroup>& Param_Filters);
	void Generate_ListBox();
	void CheckMaterialLock(bool* IsLocked);
	void Filter();
	void GenerateSortBox();
	void MasterContainsLists(const struct FSBMasterImagine& Master, const struct FFilterGroup& Group, bool* IsContains);
	void CheckMaterialsAmount(bool* Is_Lack);
	class UWidget* On_Cmb_Sort_GenerateWidget_0(const class FString& Item);
	void ConvertSortType(ESBItemSortType Param_SortType, ECraftRecepiSortType* CraftSort);
	void ConvertCraftSort(ECraftRecepiSortType CraftSortType, ESBItemSortType* Param_SortType);
	void IsAnyLiquidMemoryActive(bool* Active);
	void UpdateSelectedItem(class URecepiListItemBtn_C* SelectedItem);
	void UpdateTimeLimited();
	void InitializeFilter();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ImagineCraft_C">();
	}
	static class UImagineCraft_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UImagineCraft_C>();
	}
};
static_assert(alignof(UImagineCraft_C) == 0x000008, "Wrong alignment on UImagineCraft_C");
static_assert(sizeof(UImagineCraft_C) == 0x000498, "Wrong size on UImagineCraft_C");
static_assert(offsetof(UImagineCraft_C, UberGraphFrame) == 0x0002B0, "Member 'UImagineCraft_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ArrowInAnim) == 0x0002B8, "Member 'UImagineCraft_C::ArrowInAnim' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Btn_Craft) == 0x0002C0, "Member 'UImagineCraft_C::Btn_Craft' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Btn_ShowHint) == 0x0002C8, "Member 'UImagineCraft_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CanvasPanel_4) == 0x0002D0, "Member 'UImagineCraft_C::CanvasPanel_4' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CanvasRadyUpgrade_1) == 0x0002D8, "Member 'UImagineCraft_C::CanvasRadyUpgrade_1' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CB_FilterCraftable) == 0x0002E0, "Member 'UImagineCraft_C::CB_FilterCraftable' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Cmb_Sort) == 0x0002E8, "Member 'UImagineCraft_C::Cmb_Sort' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CmnAnim_ArrowM) == 0x0002F0, "Member 'UImagineCraft_C::CmnAnim_ArrowM' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CmnBack) == 0x0002F8, "Member 'UImagineCraft_C::CmnBack' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CmnBtnWishListWhite) == 0x000300, "Member 'UImagineCraft_C::CmnBtnWishListWhite' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, CmnImageThrobber) == 0x000308, "Member 'UImagineCraft_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Cvs_FilterSelector) == 0x000310, "Member 'UImagineCraft_C::Cvs_FilterSelector' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Cvs_LackAdvRank) == 0x000318, "Member 'UImagineCraft_C::Cvs_LackAdvRank' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Cvs_LiquidMemory) == 0x000320, "Member 'UImagineCraft_C::Cvs_LiquidMemory' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Cvs_Timelimited) == 0x000328, "Member 'UImagineCraft_C::Cvs_Timelimited' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, FilterButton) == 0x000330, "Member 'UImagineCraft_C::FilterButton' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Help) == 0x000338, "Member 'UImagineCraft_C::Help' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Image_194) == 0x000340, "Member 'UImagineCraft_C::Image_194' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImageCategoryBG) == 0x000348, "Member 'UImagineCraft_C::ImageCategoryBG' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImageWhiteBG) == 0x000350, "Member 'UImagineCraft_C::ImageWhiteBG' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImagineCraftAnim) == 0x000358, "Member 'UImagineCraft_C::ImagineCraftAnim' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImagineCraftDesc) == 0x000360, "Member 'UImagineCraft_C::ImagineCraftDesc' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImagineCraftResult) == 0x000368, "Member 'UImagineCraft_C::ImagineCraftResult' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImgHeaderBattleImagine) == 0x000370, "Member 'UImagineCraft_C::ImgHeaderBattleImagine' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ImgHeaderEnhanceImagine) == 0x000378, "Member 'UImagineCraft_C::ImgHeaderEnhanceImagine' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Load) == 0x000380, "Member 'UImagineCraft_C::Load' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, MyWalletWidget) == 0x000388, "Member 'UImagineCraft_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ShopMenu_Craft_InAnime) == 0x000390, "Member 'UImagineCraft_C::ShopMenu_Craft_InAnime' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Sz_RequireAdvRank) == 0x000398, "Member 'UImagineCraft_C::Sz_RequireAdvRank' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Sz_SelectRecepi) == 0x0003A0, "Member 'UImagineCraft_C::Sz_SelectRecepi' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, UIBlocker) == 0x0003A8, "Member 'UImagineCraft_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, VT_RecepiBOx) == 0x0003B0, "Member 'UImagineCraft_C::VT_RecepiBOx' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, WS_HeaderImg) == 0x0003B8, "Member 'UImagineCraft_C::WS_HeaderImg' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, OnClose) == 0x0003C0, "Member 'UImagineCraft_C::OnClose' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Selected) == 0x0003D0, "Member 'UImagineCraft_C::Selected' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, IsInitialized) == 0x000408, "Member 'UImagineCraft_C::IsInitialized' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, Filters) == 0x000410, "Member 'UImagineCraft_C::Filters' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, RecepiItems) == 0x000420, "Member 'UImagineCraft_C::RecepiItems' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, ShowType) == 0x000430, "Member 'UImagineCraft_C::ShowType' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, SortFromEnum) == 0x000438, "Member 'UImagineCraft_C::SortFromEnum' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, SortType) == 0x000488, "Member 'UImagineCraft_C::SortType' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, IsCloseBlocked) == 0x000489, "Member 'UImagineCraft_C::IsCloseBlocked' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, AnimVar) == 0x00048A, "Member 'UImagineCraft_C::AnimVar' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, StorageNo) == 0x00048C, "Member 'UImagineCraft_C::StorageNo' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, DStudio_Desc) == 0x000490, "Member 'UImagineCraft_C::DStudio_Desc' has a wrong offset!");
static_assert(offsetof(UImagineCraft_C, DStudio_Result) == 0x000491, "Member 'UImagineCraft_C::DStudio_Result' has a wrong offset!");

}

