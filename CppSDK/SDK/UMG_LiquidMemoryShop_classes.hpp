#pragma once

 

// Package: UMG_LiquidMemoryShop

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_LiquidMemoryShop.UMG_LiquidMemoryShop_C
// 0x02E8 (0x0598 - 0x02B0)
class UUMG_LiquidMemoryShop_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimDrink;                                         // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLoopArrow;                                     // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight2;                                        // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimLight1;                                        // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02D8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02E0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           Anime_TotalGrp;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           ArrowGrp;                                          // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgBlack;                                           // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BgShadow;                                          // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                                Border_LiquidMemoryDetails;                        // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_CloseDialog;                                   // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ShowHint;                                      // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L1;                                         // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L2;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L3;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L4;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L5;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L6;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L7;                                         // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Circle_L8;                                         // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CloseDialog;                                       // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnAnim_LiquidMemoryActive_C*          CmnAnim_LiquidMemoryActive;                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnBack01_C*                           CmnBack01;                                         // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            DecisionBtn;                                       // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Helpe;                                             // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HelpIconBG;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Hl;                                                // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_1;                                     // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Arrow_2;                                     // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_BLine_1;                                     // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_ExtractionMachine;                           // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Glass;                                       // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line_1;                                      // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_line_5;                                      // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                               ItemDetailsGrp;                                    // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Label_Contents;                                    // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LogoBG;                                            // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Menu;                                              // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMyWalletWidget_C*                      MyWalletWidget;                                    // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    PurchaseBtnLabel_2;                                // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ActivateItems;                           // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ScrollBox_ProductItems;                            // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Selected;                                          // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ShopIcon;                                          // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShopMenu_InAnime_C*                    ShopMenu_InAnime;                                  // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Txt_TotalCostValue;                                // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCost;                                           // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker_SystemMessage;                           // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_LiquidMemoryAccumlulateList_C*     UMG_LiquidMemoryAccumlulateList;                   // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x0478(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsClosingMenu;                                     // 0x0488(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52CE[0x3];                                     // 0x0489(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CurrHoveredListItemLiquidMemoryId;                 // 0x048C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CurrHoveredListItemUsingBottleNum;                 // 0x0490(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52CF[0x4];                                     // 0x0494(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMG_LiquidMemoryProductListItem_C*     CurrSelectedListItem;                              // 0x0498(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDetailsShowed;                                   // 0x04A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D0[0x3];                                     // 0x04A1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalCost;                                         // 0x04A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, int32>                            UsingLiquidMemoryIdAndLevelList;                   // 0x04A8(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsPriceDiscount;                                   // 0x04F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D1[0x3];                                     // 0x04F9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         PriceDiscountRate;                                 // 0x04FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBLiquidMemoryInfo>            OwnLiquidMemoryInfos;                              // 0x0500(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsRequestingLiquidMemoryAccumulate;                // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsOpenExecuting;                                   // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D2[0x6];                                     // 0x0512(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 TotalCost_PerItems;                                // 0x0518(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_LiquidMemoryProductListItem_C*     PurchaseNumAddOrSubbedListItem;                    // 0x0528(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          TickCheck;                                         // 0x0530(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D3[0x3];                                     // 0x0531(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TotalUsingLiquidMemory;                            // 0x0534(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsLiquidMemoryUsed;                                // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D4[0x7];                                     // 0x0539(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBLiquidMemoryAccumulateTokenInfo> AccumulateTokenMaster;                             // 0x0540(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class USBToken*                               Token;                                             // 0x0550(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSBTokenState>                  TokenList;                                         // 0x0558(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          IsEnableTokenWindow;                               // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_52D5[0x7];                                     // 0x0569(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBlocker_C*                           UIBlockerUse;                                      // 0x0570(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                ProductItemPadding;                                // 0x0578(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FMargin                                ActivateItemPadding;                               // 0x0588(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature(bool Param_IsLiquidMemoryUsed);
	void ExecuteUbergraph_UMG_LiquidMemoryShop(int32 EntryPoint);
	void BndEvt__UMG_LiquidMemoryShop_SBButton_C_146_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void Init();
	void WidgetAnimationEvt_AnimDrink_K2Node_WidgetAnimationEvent_0();
	void BndEvt__UMG_LiquidMemoryShop_UMG_LiquidMemoryAccumlulateList_K2Node_ComponentBoundEvent_5_OnAccumulateCompleted__DelegateSignature();
	void OnPopupTokenList(int32 LiquidMemoryId, bool IsFullCharge);
	void GetTokenList(const struct FSBTokenStates& States);
	void BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_1();
	void BndEvt__CmnBack01_K2Node_ComponentBoundEvent_2_EventClicked__DelegateSignature();
	void OnListItemPurchaseNumAddOveredMax();
	void ExecOpen();
	void OnAccumulateLiquidMemory_Event(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos);
	void OnUseLiquidMemoryDelegate_____(const int32 InRetCode, const TArray<struct FSBLiquidMemoryInfo>& InUpdatedLiquidMemoryInfos);
	void EndUseLiquidMemoryYesNoDialog_____(EDialogResult Result);
	void BndEvt__PurchaseBtnGrp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnDetailsCloseAnimationFinished(class UUserWidget* InWidget);
	void OnListItemSelected(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnListItemPurchaseNumSubbed(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void OnListItemPurchaseNumAdded(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void DoClose(bool Param_IsLiquidMemoryUsed);
	void OnPress_Cancel();
	void BndEvt__Btn_ShowHint_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void WidgetAnimationEvt_AnimIn_K2Node_WidgetAnimationEvent_0();
	void OnAnimTimer();
	void Construct();
	void Destruct();
	void EndSystemMessage();
	void ShowSystemMessage(const class FText& InMessageText);
	void OnLiquidMemoryDrinkingAnimationFinished();
	void PlayLiquidMemoryDrinkingAnimation();
	void CreateProductItemList();
	void CreateItemDetails();
	void ShowLiquidMemoryDetails(int32 InLiquidMemoryId, int32 InBottleNum);
	void HideLiquidMemoryDetails();
	void InitProductItemList();
	void AddOrMinusLiquidMemoryIdAndLevelToUsingList(class UUMG_LiquidMemoryProductListItem_C* InItem);
	void CalculateTotalCost();
	void RandomPlayAnimation();
	void RandomPlayAnimation2();
	void CalculateTotalUsingLiquidMemory();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_LiquidMemoryShop_C">();
	}
	static class UUMG_LiquidMemoryShop_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_LiquidMemoryShop_C>();
	}
};
static_assert(alignof(UUMG_LiquidMemoryShop_C) == 0x000008, "Wrong alignment on UUMG_LiquidMemoryShop_C");
static_assert(sizeof(UUMG_LiquidMemoryShop_C) == 0x000598, "Wrong size on UUMG_LiquidMemoryShop_C");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UberGraphFrame) == 0x0002B0, "Member 'UUMG_LiquidMemoryShop_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimDrink) == 0x0002B8, "Member 'UUMG_LiquidMemoryShop_C::AnimDrink' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimLoopArrow) == 0x0002C0, "Member 'UUMG_LiquidMemoryShop_C::AnimLoopArrow' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimLight2) == 0x0002C8, "Member 'UUMG_LiquidMemoryShop_C::AnimLight2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimLight1) == 0x0002D0, "Member 'UUMG_LiquidMemoryShop_C::AnimLight1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimOut) == 0x0002D8, "Member 'UUMG_LiquidMemoryShop_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AnimIn) == 0x0002E0, "Member 'UUMG_LiquidMemoryShop_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Anime_TotalGrp) == 0x0002E8, "Member 'UUMG_LiquidMemoryShop_C::Anime_TotalGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ArrowGrp) == 0x0002F0, "Member 'UUMG_LiquidMemoryShop_C::ArrowGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, BG) == 0x0002F8, "Member 'UUMG_LiquidMemoryShop_C::BG' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, BgBlack) == 0x000300, "Member 'UUMG_LiquidMemoryShop_C::BgBlack' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, BgShadow) == 0x000308, "Member 'UUMG_LiquidMemoryShop_C::BgShadow' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Border_LiquidMemoryDetails) == 0x000310, "Member 'UUMG_LiquidMemoryShop_C::Border_LiquidMemoryDetails' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Btn_CloseDialog) == 0x000318, "Member 'UUMG_LiquidMemoryShop_C::Btn_CloseDialog' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Btn_ShowHint) == 0x000320, "Member 'UUMG_LiquidMemoryShop_C::Btn_ShowHint' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L1) == 0x000328, "Member 'UUMG_LiquidMemoryShop_C::Circle_L1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L2) == 0x000330, "Member 'UUMG_LiquidMemoryShop_C::Circle_L2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L3) == 0x000338, "Member 'UUMG_LiquidMemoryShop_C::Circle_L3' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L4) == 0x000340, "Member 'UUMG_LiquidMemoryShop_C::Circle_L4' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L5) == 0x000348, "Member 'UUMG_LiquidMemoryShop_C::Circle_L5' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L6) == 0x000350, "Member 'UUMG_LiquidMemoryShop_C::Circle_L6' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L7) == 0x000358, "Member 'UUMG_LiquidMemoryShop_C::Circle_L7' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Circle_L8) == 0x000360, "Member 'UUMG_LiquidMemoryShop_C::Circle_L8' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CloseDialog) == 0x000368, "Member 'UUMG_LiquidMemoryShop_C::CloseDialog' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CmnAnim_LiquidMemoryActive) == 0x000370, "Member 'UUMG_LiquidMemoryShop_C::CmnAnim_LiquidMemoryActive' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CmnBack01) == 0x000378, "Member 'UUMG_LiquidMemoryShop_C::CmnBack01' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, DecisionBtn) == 0x000380, "Member 'UUMG_LiquidMemoryShop_C::DecisionBtn' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Helpe) == 0x000388, "Member 'UUMG_LiquidMemoryShop_C::Helpe' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, HelpIconBG) == 0x000390, "Member 'UUMG_LiquidMemoryShop_C::HelpIconBG' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Hl) == 0x000398, "Member 'UUMG_LiquidMemoryShop_C::Hl' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_0) == 0x0003A0, "Member 'UUMG_LiquidMemoryShop_C::Image_0' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_Arrow_1) == 0x0003A8, "Member 'UUMG_LiquidMemoryShop_C::Image_Arrow_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_Arrow_2) == 0x0003B0, "Member 'UUMG_LiquidMemoryShop_C::Image_Arrow_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_BLine_1) == 0x0003B8, "Member 'UUMG_LiquidMemoryShop_C::Image_BLine_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_ExtractionMachine) == 0x0003C0, "Member 'UUMG_LiquidMemoryShop_C::Image_ExtractionMachine' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_Glass) == 0x0003C8, "Member 'UUMG_LiquidMemoryShop_C::Image_Glass' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_line) == 0x0003D0, "Member 'UUMG_LiquidMemoryShop_C::Image_line' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_line_1) == 0x0003D8, "Member 'UUMG_LiquidMemoryShop_C::Image_line_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Image_line_5) == 0x0003E0, "Member 'UUMG_LiquidMemoryShop_C::Image_line_5' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ItemDetailsGrp) == 0x0003E8, "Member 'UUMG_LiquidMemoryShop_C::ItemDetailsGrp' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Label_Contents) == 0x0003F0, "Member 'UUMG_LiquidMemoryShop_C::Label_Contents' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Line_1) == 0x0003F8, "Member 'UUMG_LiquidMemoryShop_C::Line_1' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, LogoBG) == 0x000400, "Member 'UUMG_LiquidMemoryShop_C::LogoBG' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Menu) == 0x000408, "Member 'UUMG_LiquidMemoryShop_C::Menu' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, MyWalletWidget) == 0x000410, "Member 'UUMG_LiquidMemoryShop_C::MyWalletWidget' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, PurchaseBtnLabel_2) == 0x000418, "Member 'UUMG_LiquidMemoryShop_C::PurchaseBtnLabel_2' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ScrollBox_ActivateItems) == 0x000420, "Member 'UUMG_LiquidMemoryShop_C::ScrollBox_ActivateItems' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ScrollBox_ProductItems) == 0x000428, "Member 'UUMG_LiquidMemoryShop_C::ScrollBox_ProductItems' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Selected) == 0x000430, "Member 'UUMG_LiquidMemoryShop_C::Selected' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ShopIcon) == 0x000438, "Member 'UUMG_LiquidMemoryShop_C::ShopIcon' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ShopMenu_InAnime) == 0x000440, "Member 'UUMG_LiquidMemoryShop_C::ShopMenu_InAnime' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ShowTutorialHelpBtn) == 0x000448, "Member 'UUMG_LiquidMemoryShop_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Txt_TotalCostValue) == 0x000450, "Member 'UUMG_LiquidMemoryShop_C::Txt_TotalCostValue' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TxtCost) == 0x000458, "Member 'UUMG_LiquidMemoryShop_C::TxtCost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UIBlocker) == 0x000460, "Member 'UUMG_LiquidMemoryShop_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UIBlocker_SystemMessage) == 0x000468, "Member 'UUMG_LiquidMemoryShop_C::UIBlocker_SystemMessage' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UMG_LiquidMemoryAccumlulateList) == 0x000470, "Member 'UUMG_LiquidMemoryShop_C::UMG_LiquidMemoryAccumlulateList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, OnClose) == 0x000478, "Member 'UUMG_LiquidMemoryShop_C::OnClose' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsClosingMenu) == 0x000488, "Member 'UUMG_LiquidMemoryShop_C::IsClosingMenu' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CurrHoveredListItemLiquidMemoryId) == 0x00048C, "Member 'UUMG_LiquidMemoryShop_C::CurrHoveredListItemLiquidMemoryId' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CurrHoveredListItemUsingBottleNum) == 0x000490, "Member 'UUMG_LiquidMemoryShop_C::CurrHoveredListItemUsingBottleNum' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, CurrSelectedListItem) == 0x000498, "Member 'UUMG_LiquidMemoryShop_C::CurrSelectedListItem' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsDetailsShowed) == 0x0004A0, "Member 'UUMG_LiquidMemoryShop_C::IsDetailsShowed' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TotalCost) == 0x0004A4, "Member 'UUMG_LiquidMemoryShop_C::TotalCost' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UsingLiquidMemoryIdAndLevelList) == 0x0004A8, "Member 'UUMG_LiquidMemoryShop_C::UsingLiquidMemoryIdAndLevelList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsPriceDiscount) == 0x0004F8, "Member 'UUMG_LiquidMemoryShop_C::IsPriceDiscount' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, PriceDiscountRate) == 0x0004FC, "Member 'UUMG_LiquidMemoryShop_C::PriceDiscountRate' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, OwnLiquidMemoryInfos) == 0x000500, "Member 'UUMG_LiquidMemoryShop_C::OwnLiquidMemoryInfos' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsRequestingLiquidMemoryAccumulate) == 0x000510, "Member 'UUMG_LiquidMemoryShop_C::IsRequestingLiquidMemoryAccumulate' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsOpenExecuting) == 0x000511, "Member 'UUMG_LiquidMemoryShop_C::IsOpenExecuting' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TotalCost_PerItems) == 0x000518, "Member 'UUMG_LiquidMemoryShop_C::TotalCost_PerItems' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, PurchaseNumAddOrSubbedListItem) == 0x000528, "Member 'UUMG_LiquidMemoryShop_C::PurchaseNumAddOrSubbedListItem' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TickCheck) == 0x000530, "Member 'UUMG_LiquidMemoryShop_C::TickCheck' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TotalUsingLiquidMemory) == 0x000534, "Member 'UUMG_LiquidMemoryShop_C::TotalUsingLiquidMemory' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsLiquidMemoryUsed) == 0x000538, "Member 'UUMG_LiquidMemoryShop_C::IsLiquidMemoryUsed' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, AccumulateTokenMaster) == 0x000540, "Member 'UUMG_LiquidMemoryShop_C::AccumulateTokenMaster' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, Token) == 0x000550, "Member 'UUMG_LiquidMemoryShop_C::Token' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, TokenList) == 0x000558, "Member 'UUMG_LiquidMemoryShop_C::TokenList' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, IsEnableTokenWindow) == 0x000568, "Member 'UUMG_LiquidMemoryShop_C::IsEnableTokenWindow' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, UIBlockerUse) == 0x000570, "Member 'UUMG_LiquidMemoryShop_C::UIBlockerUse' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ProductItemPadding) == 0x000578, "Member 'UUMG_LiquidMemoryShop_C::ProductItemPadding' has a wrong offset!");
static_assert(offsetof(UUMG_LiquidMemoryShop_C, ActivateItemPadding) == 0x000588, "Member 'UUMG_LiquidMemoryShop_C::ActivateItemPadding' has a wrong offset!");

}

