#pragma once

 

// Package: EventShop

#include "Basic.hpp"

#include "E_SBDetailsZoomIn_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass EventShop.EventShop_C
// 0x02B8 (0x0568 - 0x02B0)
class UEventShop_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimItemIn;                                        // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimTokenIn;                                       // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetSwitcher*                        BgSwitcher;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           Blocker_Layer01;                                   // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           Blocker_Layer02;                                   // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           BodyGrp;                                           // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBoxCmnCheckBox01_C*             Box_HideUnequipableItems;                          // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopCashBox_C*                    BpCashBox;                                         // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTokenBox_C*                   BpTokenBox;                                        // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            btn_DetailedFilter;                                // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBtn16_C*                            Btn_StorageSelect;                                 // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  BtnFull_Layer02;                                   // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBtnBack;                                        // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          CmnIconLiquidMem;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CmnIconMarkLimited;                                // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShop_InAnime_C*                   EventShop_InAnime;                                 // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventShopTabBox_C*                     EventShopTabBox;                                   // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ProductBox_ItemList;                               // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Root_Panel;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBDateTimeTextBlock*                   SBDateTimeTextBlock_TextDeadline;                  // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               SelectProductMsgGrp;                               // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ShopType_TitleParts;                               // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           SortFilterGrp;                                     // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Txt_filter_list;                                   // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Txt_sort_list;                                     // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Ui_sub;                                            // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DetailsImagineBattleZoomIn_C*      UMG_DetailsImagineBattleZoomIn;                    // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProductDetail_C*                   UMG_ProductDetail;                                 // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsCloseingMenu;                                    // 0x03B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643C[0x7];                                     // 0x03B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UEventShopProductBox_Item_C*            SelectedItem;                                      // 0x03D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExchangeNumber;                                    // 0x03D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         ExchangeTotalPoint;                                // 0x03DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectTabId;                                       // 0x03E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectEventId;                                     // 0x03E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         SelectTokenId;                                     // 0x03E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          SelectIsBag;                                       // 0x03EC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643D[0x3];                                     // 0x03ED(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   Inventory_ItemBag;                                 // 0x03F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_CharaStorage;                            // 0x03F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBTemporallyStorage*                   Inventory_EquipBag;                                // 0x0400(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBEventShopComponent*                  EventShopComponent;                                // 0x0408(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBMasterDataManager*                   MasterDataManager;                                 // 0x0410(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBEventShopExchangeHistory>    List_History;                                      // 0x0418(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBEventShopMasterData>         List_Event;                                        // 0x0428(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBEventShopProduct>            List_Product;                                      // 0x0438(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 List_TokenId;                                      // 0x0448(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsExchanged;                                       // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EShopType                                     ShopType;                                          // 0x0459(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_643E[0x6];                                     // 0x045A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBEventShopPurchaseItemInfo>   PurchaseItemList;                                  // 0x0460(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 UseTokenAmountList;                                // 0x0470(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 UseTokenPriceList;                                 // 0x0480(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 PurchaseItemIdList;                                // 0x0490(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FSBSkillParam>                  PurchaseTAbilityIdList;                            // 0x04A0(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         DiscountRate;                                      // 0x04B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDiscount;                                        // 0x04B4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsActiveDiscount;                                  // 0x04B5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpeningStorageSelect;                            // 0x04B6(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsUpdatedTokenList;                                // 0x04B7(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                         Select_Sort;                                       // 0x04B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Select_Filter;                                     // 0x04BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialog_TacticalAbilityLearning_C*      TacticalAbilityDialog;                             // 0x04C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class UEventShopProductBox_Item_C*, class UBP_SBProductItemData_C*> ProductItemDataMap;                                // 0x04C8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                          IsNeedLabel;                                       // 0x0518(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_643F[0x7];                                     // 0x0519(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UEventShopStorageSelect_C*              BP_StorageSelect;                                  // 0x0520(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_ProductDetailMenu_C*               ProductDetailMenu;                                 // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBPlayerAdventureBoardComponent*       AdvBoardComponent;                                 // 0x0530(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USBNetworkDataCache*                    DataCache;                                         // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ASBPlayerController*                    As_SBPlayer_Controller;                            // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESBClassType                                  In_Class_Type;                                     // 0x0548(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6440[0x7];                                     // 0x0549(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBPlayerCharacterCommonComponent*      SBPCCommonComponent;                               // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FinishedGetSkillMaster;                            // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6441[0x7];                                     // 0x0559(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USBTemporallyStorage*                   InventoryOrnament;                                 // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_EventShop(int32 EntryPoint);
	void BndEvt__EventShop_Box_HideUnequipableItems_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void OnCharaSkillMasteryOthersInfo_Event(int32 Ret);
	void GetSkillMastery();
	void BndEvt__EventShop_Btn_StorageSelect1_K2Node_ComponentBoundEvent_3_EventOnClicked__DelegateSignature();
	void OnClose_StorageSelect();
	void OnPressESC();
	void BndEvt__EventShop_txt_filter_list_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType);
	void BndEvt__EventShop_txt_sort_list_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& Param_SelectedItem, ESelectInfo SelectionType);
	void OnEsc_StorageSelect();
	void BndEvt__EventShop_BtnFull_Layer02_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void BndEvt__BpCashBox_K2Node_ComponentBoundEvent_7_OnPurchased__DelegateSignature();
	void UpdateInfoClickedBanner(int32 Param_Index);
	void BndEvt__EventShopTabBox_K2Node_ComponentBoundEvent_5_OnClickBanner__DelegateSignature(int32 Param_Index);
	void OnListItemSelected(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput);
	void Destruct();
	void DoClose();
	void BndEvt__CmnBtnBack_K2Node_ComponentBoundEvent_0_EventClicked__DelegateSignature();
	void Construct();
	void OnStorageSelectCancel();
	void BndEvt__EventShop_btn_DetailedFilter_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnEndCheckRequest(const EYesNoDialogResult Result);
	void CheckRequestTAbiliryShop();
	void CloseCheckListDialog();
	void ReleaseExchangeList();
	void OnCancelEvent();
	void OnExchange_Event();
	void ShowExchangeList();
	void ExtractItemId();
	void OpenSelectorDialog();
	void OnStorageSelected(int32 Selected);
	void CloseSelectorDialog();
	void UpdateProductInfo();
	void OnExchangeItem_Event(const bool Result, const int32 RetCode);
	void EndSystemMessage();
	void ShowSystemMessageDialog(const class FText& InMessage);
	void CloseConfirmDialog(EDialogResult Result);
	void OpenConfirmDialog();
	void OnChangeTrying(class UBP_SBProductItemData_C* Sender, bool bTrying);
	void BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_3_OnClickZoomIn__DelegateSignature(E_SBDetailsZoomIn Type);
	void OnCloseDetailMenu(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__EventShop_UMG_ProductDetail_K2Node_ComponentBoundEvent_4_OnClickItemBoxDetail__DelegateSignature(class UBP_SBProductItemData_C* Data);
	void BndEvt__UMG_ProductDetail_K2Node_ComponentBoundEvent_2_OnShowDetails__DelegateSignature(bool bShow);
	void BndEvt__UMG_DetailsImagineBattleZoomIn_K2Node_ComponentBoundEvent_1_OnClickZoomOut__DelegateSignature();
	void EndGetKillMaster_Event();
	void OnGetCryptocurrency_Event(const bool Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void OnGetAdvBoard_Event(int32 RetCode);
	void Request_GetAdvBoard();
	void OnGetExchangeHistory_Event(const bool Result, const int32 RetCode, const TArray<struct FSBEventShopExchangeHistory>& History);
	void Request_GetProductList();
	void DeleteTacticalAbilityDialog();
	void TacticalAbilityDialogEndAnimOut();
	void TacticalAbilityDialogEndAnimIn();
	void UnbindTacticalAbilityDialog(class UDialog_TacticalAbilityLearning_C* Dialog);
	void BindTacticalAbilityDialog(class UDialog_TacticalAbilityLearning_C* Dialog);
	void CreateTacticalAbilityDialog();
	void Initialize();
	void Release();
	void CreateEventList();
	void CreateProductItemList();
	void CreateTokenList();
	void SetSelectItemInfoRemake(class UEventShopProductBox_Item_C* Item, bool bOnNumberInput);
	void Set_Select_Message_Visibility(bool IsSelect);
	void Set_Exchange_Cost_Text_Remake(class UEventShopProductBox_Item_C* Item);
	void BindEvent();
	void UnBindEvent();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	void GetExchangeNum(int32 EventId, int32 ItemSetId, int32* Num);
	void GetIsAchieveRank(int32 NeedRank, bool* IsAchieve);
	void GetIconTexture(int32 ID, TSoftObjectPtr<class UTexture2D>* Texture);
	void CheckUseTokenList(int32 TokenID, int32 Amount, int32 Price);
	void Is_Equip_Shop();
	void UpdateTokenList();
	class UWidget* On_txt_sort_list_GenerateWidget(const class FString& Item);
	class UWidget* On_txt_filter_list_GenerateWidget(const class FString& Item);
	void CheckFilterSearch(int32 ItemSetId, bool* IsOk);
	void GetRewardItemType(int32 ID, ESBRewardItemType* Type);
	void GetItemId(int32 ItemSetId, int32* ItemId);
	void CheckShopType(int32 Param_ShopType, bool* IsOk);
	void IsExchangable(int32 ItemSetId, bool* Ret);
	void ResultGetTacticalAbility();
	void SetProductLabel(int32 InId, int32* OutId);
	void AdjustProductList(bool Enable);
	void SetupByShopType();
	void IsPickupLabel(int32 In, bool* Out);
	void CheckNeedLabel();
	void SetBtnVisibility();
	void Is_Valid_Period(const struct FDateTime& Start, const struct FDateTime& End, bool* IsValid);
	void GetBpStorageSelect(class UEventShopStorageSelect_C** Widget);
	void CheckItemRewardType(ESBRewardItemType ItemRewardType, int32 ItemSetId, bool* Ret);
	void IsAccessory(EProtectorCategory Category, bool* IsAcc);
	void CheckDate(const struct FDateTime& StartDate, const struct FDateTime& EndDate, bool* IsOk);
	void GetInventory();
	void CreateProductItemList_Filtering();
	void IsHaveBoard(int32 BoardId, bool* Ret);
	void GetNumberOfProducts(int32 ItemSetId, int32* Num);
	void StorageCheckSelectItem(TArray<struct FSBEventShopPurchaseItemInfo>& List, bool* Ret);
	void Sell_Type_Is_Sold_Out(int32 SellType, int32 Limit, int32 Stock, bool IsExchangable, int32* Type);
	void CheckEquipGender(int32 ID, bool* IsOk);
	void Is_Mastery_Skill(int32 ItemSetId, int32 SellType, int32* Ret);
	void IsHaveCutomPartsById(int32 ID, bool* Ret);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"EventShop_C">();
	}
	static class UEventShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UEventShop_C>();
	}
};
static_assert(alignof(UEventShop_C) == 0x000008, "Wrong alignment on UEventShop_C");
static_assert(sizeof(UEventShop_C) == 0x000568, "Wrong size on UEventShop_C");
static_assert(offsetof(UEventShop_C, UberGraphFrame) == 0x0002B0, "Member 'UEventShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UEventShop_C, AnimItemIn) == 0x0002B8, "Member 'UEventShop_C::AnimItemIn' has a wrong offset!");
static_assert(offsetof(UEventShop_C, AnimTokenIn) == 0x0002C0, "Member 'UEventShop_C::AnimTokenIn' has a wrong offset!");
static_assert(offsetof(UEventShop_C, AnimLight2) == 0x0002C8, "Member 'UEventShop_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UEventShop_C, AnimLight1) == 0x0002D0, "Member 'UEventShop_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BgSwitcher) == 0x0002D8, "Member 'UEventShop_C::BgSwitcher' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Blocker_Layer01) == 0x0002E0, "Member 'UEventShop_C::Blocker_Layer01' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Blocker_Layer02) == 0x0002E8, "Member 'UEventShop_C::Blocker_Layer02' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BodyGrp) == 0x0002F0, "Member 'UEventShop_C::BodyGrp' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Box_HideUnequipableItems) == 0x0002F8, "Member 'UEventShop_C::Box_HideUnequipableItems' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BpCashBox) == 0x000300, "Member 'UEventShop_C::BpCashBox' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BpTokenBox) == 0x000308, "Member 'UEventShop_C::BpTokenBox' has a wrong offset!");
static_assert(offsetof(UEventShop_C, btn_DetailedFilter) == 0x000310, "Member 'UEventShop_C::btn_DetailedFilter' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Btn_ShowHint) == 0x000318, "Member 'UEventShop_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Btn_StorageSelect) == 0x000320, "Member 'UEventShop_C::Btn_StorageSelect' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BtnFull_Layer02) == 0x000328, "Member 'UEventShop_C::BtnFull_Layer02' has a wrong offset!");
static_assert(offsetof(UEventShop_C, CmnBtnBack) == 0x000330, "Member 'UEventShop_C::CmnBtnBack' has a wrong offset!");
static_assert(offsetof(UEventShop_C, CmnIconLiquidMem) == 0x000338, "Member 'UEventShop_C::CmnIconLiquidMem' has a wrong offset!");
static_assert(offsetof(UEventShop_C, CmnIconMarkLimited) == 0x000340, "Member 'UEventShop_C::CmnIconMarkLimited' has a wrong offset!");
static_assert(offsetof(UEventShop_C, EventShop_InAnime) == 0x000348, "Member 'UEventShop_C::EventShop_InAnime' has a wrong offset!");
static_assert(offsetof(UEventShop_C, EventShopTabBox) == 0x000350, "Member 'UEventShop_C::EventShopTabBox' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ProductBox_ItemList) == 0x000358, "Member 'UEventShop_C::ProductBox_ItemList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Root_Panel) == 0x000360, "Member 'UEventShop_C::Root_Panel' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SBDateTimeTextBlock_TextDeadline) == 0x000368, "Member 'UEventShop_C::SBDateTimeTextBlock_TextDeadline' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectProductMsgGrp) == 0x000370, "Member 'UEventShop_C::SelectProductMsgGrp' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ShopType_TitleParts) == 0x000378, "Member 'UEventShop_C::ShopType_TitleParts' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SortFilterGrp) == 0x000380, "Member 'UEventShop_C::SortFilterGrp' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Txt_filter_list) == 0x000388, "Member 'UEventShop_C::Txt_filter_list' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Txt_sort_list) == 0x000390, "Member 'UEventShop_C::Txt_sort_list' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Ui_sub) == 0x000398, "Member 'UEventShop_C::Ui_sub' has a wrong offset!");
static_assert(offsetof(UEventShop_C, UIBlocker) == 0x0003A0, "Member 'UEventShop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UEventShop_C, UMG_DetailsImagineBattleZoomIn) == 0x0003A8, "Member 'UEventShop_C::UMG_DetailsImagineBattleZoomIn' has a wrong offset!");
static_assert(offsetof(UEventShop_C, UMG_ProductDetail) == 0x0003B0, "Member 'UEventShop_C::UMG_ProductDetail' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsCloseingMenu) == 0x0003B8, "Member 'UEventShop_C::IsCloseingMenu' has a wrong offset!");
static_assert(offsetof(UEventShop_C, OnClose) == 0x0003C0, "Member 'UEventShop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectedItem) == 0x0003D0, "Member 'UEventShop_C::SelectedItem' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ExchangeNumber) == 0x0003D8, "Member 'UEventShop_C::ExchangeNumber' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ExchangeTotalPoint) == 0x0003DC, "Member 'UEventShop_C::ExchangeTotalPoint' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectTabId) == 0x0003E0, "Member 'UEventShop_C::SelectTabId' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectEventId) == 0x0003E4, "Member 'UEventShop_C::SelectEventId' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectTokenId) == 0x0003E8, "Member 'UEventShop_C::SelectTokenId' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SelectIsBag) == 0x0003EC, "Member 'UEventShop_C::SelectIsBag' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Inventory_ItemBag) == 0x0003F0, "Member 'UEventShop_C::Inventory_ItemBag' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Inventory_CharaStorage) == 0x0003F8, "Member 'UEventShop_C::Inventory_CharaStorage' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Inventory_EquipBag) == 0x000400, "Member 'UEventShop_C::Inventory_EquipBag' has a wrong offset!");
static_assert(offsetof(UEventShop_C, EventShopComponent) == 0x000408, "Member 'UEventShop_C::EventShopComponent' has a wrong offset!");
static_assert(offsetof(UEventShop_C, MasterDataManager) == 0x000410, "Member 'UEventShop_C::MasterDataManager' has a wrong offset!");
static_assert(offsetof(UEventShop_C, List_History) == 0x000418, "Member 'UEventShop_C::List_History' has a wrong offset!");
static_assert(offsetof(UEventShop_C, List_Event) == 0x000428, "Member 'UEventShop_C::List_Event' has a wrong offset!");
static_assert(offsetof(UEventShop_C, List_Product) == 0x000438, "Member 'UEventShop_C::List_Product' has a wrong offset!");
static_assert(offsetof(UEventShop_C, List_TokenId) == 0x000448, "Member 'UEventShop_C::List_TokenId' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsExchanged) == 0x000458, "Member 'UEventShop_C::IsExchanged' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ShopType) == 0x000459, "Member 'UEventShop_C::ShopType' has a wrong offset!");
static_assert(offsetof(UEventShop_C, PurchaseItemList) == 0x000460, "Member 'UEventShop_C::PurchaseItemList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, UseTokenAmountList) == 0x000470, "Member 'UEventShop_C::UseTokenAmountList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, UseTokenPriceList) == 0x000480, "Member 'UEventShop_C::UseTokenPriceList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, PurchaseItemIdList) == 0x000490, "Member 'UEventShop_C::PurchaseItemIdList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, PurchaseTAbilityIdList) == 0x0004A0, "Member 'UEventShop_C::PurchaseTAbilityIdList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, DiscountRate) == 0x0004B0, "Member 'UEventShop_C::DiscountRate' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsDiscount) == 0x0004B4, "Member 'UEventShop_C::IsDiscount' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsActiveDiscount) == 0x0004B5, "Member 'UEventShop_C::IsActiveDiscount' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsOpeningStorageSelect) == 0x0004B6, "Member 'UEventShop_C::IsOpeningStorageSelect' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsUpdatedTokenList) == 0x0004B7, "Member 'UEventShop_C::IsUpdatedTokenList' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Select_Sort) == 0x0004B8, "Member 'UEventShop_C::Select_Sort' has a wrong offset!");
static_assert(offsetof(UEventShop_C, Select_Filter) == 0x0004BC, "Member 'UEventShop_C::Select_Filter' has a wrong offset!");
static_assert(offsetof(UEventShop_C, TacticalAbilityDialog) == 0x0004C0, "Member 'UEventShop_C::TacticalAbilityDialog' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ProductItemDataMap) == 0x0004C8, "Member 'UEventShop_C::ProductItemDataMap' has a wrong offset!");
static_assert(offsetof(UEventShop_C, IsNeedLabel) == 0x000518, "Member 'UEventShop_C::IsNeedLabel' has a wrong offset!");
static_assert(offsetof(UEventShop_C, BP_StorageSelect) == 0x000520, "Member 'UEventShop_C::BP_StorageSelect' has a wrong offset!");
static_assert(offsetof(UEventShop_C, ProductDetailMenu) == 0x000528, "Member 'UEventShop_C::ProductDetailMenu' has a wrong offset!");
static_assert(offsetof(UEventShop_C, AdvBoardComponent) == 0x000530, "Member 'UEventShop_C::AdvBoardComponent' has a wrong offset!");
static_assert(offsetof(UEventShop_C, DataCache) == 0x000538, "Member 'UEventShop_C::DataCache' has a wrong offset!");
static_assert(offsetof(UEventShop_C, As_SBPlayer_Controller) == 0x000540, "Member 'UEventShop_C::As_SBPlayer_Controller' has a wrong offset!");
static_assert(offsetof(UEventShop_C, In_Class_Type) == 0x000548, "Member 'UEventShop_C::In_Class_Type' has a wrong offset!");
static_assert(offsetof(UEventShop_C, SBPCCommonComponent) == 0x000550, "Member 'UEventShop_C::SBPCCommonComponent' has a wrong offset!");
static_assert(offsetof(UEventShop_C, FinishedGetSkillMaster) == 0x000558, "Member 'UEventShop_C::FinishedGetSkillMaster' has a wrong offset!");
static_assert(offsetof(UEventShop_C, InventoryOrnament) == 0x000560, "Member 'UEventShop_C::InventoryOrnament' has a wrong offset!");

}

