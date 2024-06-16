#pragma once

 

// Package: WBP_ItemBox

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "ENumberInputDialogResult_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "E_ItemBoxDestinationType_structs.hpp"
#include "InventoryItemData_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_ItemBox.WBP_ItemBox_C
// 0x0330 (0x05E0 - 0x02B0)
class UWBP_ItemBox_C final : public USBUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x02B8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02C0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBButton_C*                            Button1_OK;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CheckBox_Money;                                    // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CheckBox_Stack;                                    // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose02_C*                          CmnClose02;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           EquipmentWarning;                                  // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             IconGridPanel;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconWarning1;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconWarning2;                                      // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_57;                                          // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_224;                                         // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_622;                                         // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_723;                                         // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_863;                                         // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon01;                                        // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon02;                                        // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon03;                                        // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon04;                                        // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon05;                                        // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon06;                                        // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon07;                                        // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon08;                                        // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon09;                                        // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon10;                                        // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon11;                                        // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon12;                                        // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon13;                                        // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon14;                                        // 0x03C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon15;                                        // 0x03C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon16;                                        // 0x03D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon17;                                        // 0x03D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon18;                                        // 0x03E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon19;                                        // 0x03E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxIcon_C*                     ItemIcon20;                                        // 0x03F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MoneyOverCheck;                                    // 0x03F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Name_WBP_ItemBox_C;                                // 0x0400(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           OKButtonErrorCheck;                                // 0x0408(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    OKButtonErrorTxt;                                  // 0x0410(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             ResultScrollBox;                                   // 0x0418(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  SBButtonTransparent;                               // 0x0420(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SelectMaxNumText;                                  // 0x0428(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SelectNamText;                                     // 0x0430(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         SelectNum;                                         // 0x0438(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           StackOverCheck;                                    // 0x0440(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt1_1;                                            // 0x0448(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment_1;                                     // 0x0450(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment_StackOverCheck;                        // 0x0458(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Comment_StackOverCheck_1;                      // 0x0460(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Recipient;                                     // 0x0468(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Title;                                         // 0x0470(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x0478(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker2;                                        // 0x0480(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxImage_C*                    WBP_ItemBoxImage;                                  // 0x0488(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper;                     // 0x0490(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper_1;                   // 0x0498(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper_2;                   // 0x04A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper_291;                 // 0x04A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper_391;                 // 0x04B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ItemBoxScrollText_Wrapper_C*       WBP_ItemBoxScrollText_Wrapper_530;                 // 0x04B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	ENumberInputDialogResult                      Result;                                            // 0x04C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RepeatPlusButton;                                  // 0x04C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          RepeatMinusButton;                                 // 0x04C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_781D[0x5];                                     // 0x04C3(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class USBUserWidget*                          MainWidget;                                        // 0x04C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                          IsClosing;                                         // 0x04D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_781E[0x7];                                     // 0x04D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnEnd;                                             // 0x04D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryItemData                     InventoryItemData;                                 // 0x04E8(0x0060)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         SelectMaxNum;                                      // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_781F[0x4];                                     // 0x054C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_ItemBoxIcon_C*>             SelectButtonList;                                  // 0x0550(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TArray<EItemType>                             TestItemType;                                      // 0x0560(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<int32>                                 TestItemID;                                        // 0x0570(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         ListCount;                                         // 0x0580(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7820[0x4];                                     // 0x0584(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<int32>                                 OverItemList;                                      // 0x0588(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OverItemCanNotLost;                                // 0x0598(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7821[0x7];                                     // 0x0599(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSBMasterItemBox                       ItemBoxData;                                       // 0x05A0(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          OverOther_;                                        // 0x05C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CanNotLostOther;                                   // 0x05C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7822[0x2];                                     // 0x05C2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BPPointNow;                                        // 0x05C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RoseorbNow;                                        // 0x05C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         LoadWitCnt;                                        // 0x05CC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIBlocker_C*                           Blocker;                                           // 0x05D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CanNotLostItemStorage;                             // 0x05D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnEnd__DelegateSignature(ENumberInputDialogResult NewParam, class UWBP_ItemBox_C* ItemBox);
	void ExecuteUbergraph_WBP_ItemBox(int32 EntryPoint);
	void BndEvt__WBP_ItemBox_CmnClose02_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
	void BndEvt__Button1_OK_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button1_OK_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Start();
	void LoadRequestRemove();
	void LoadRequestAdd();
	void RequestGetCryptocurrency();
	void OnGetCryptocurrency_Event(const bool Param_Result, const int32 RetCode, const struct FSBCryptoCurrency& Cryptocurrency);
	void CustomEvent_1(const bool Param_Result, const TArray<struct FSBAchievementInfo>& AchievementList);
	void RequestAchievement();
	void InitData();
	void BndEvt__CheckBox_Money_K2Node_ComponentBoundEvent_4_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void UpdateSelectNum();
	void CreateSelectItemScrollList();
	void IconAllSelect();
	void CreateSelectGetList();
	void UpdateEquipmentWarning();
	void BndEvt__CheckBox_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void UpdateOKButton();
	void UpdateStackOverCheck();
	void ScrollListReset();
	void CreateRandomGetList();
	void CreateAllGetList();
	void UpdateList();
	void SetSelectButtonNumAndGray();
	void ItemSetting();
	void DataInitialize();
	void CustomEvent_0(class UWBP_ItemBoxIcon_C* Button);
	void ItemIconSetting();
	void BndEvt__SBButtonTransparent_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button1_1_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void OnDestructMainWidget();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void OnPress_Cancel();
	void HideDialog(bool bPlayCloseSe);
	void Destruct();
	void Construct();
	void Get_Scroll_List_Item(class UWBP_ItemBoxScrollText_Wrapper_C** AsWBP_Item_Box_Scroll_Text);
	void Get_Select_Item_Type_List(E_ItemBoxDestinationType DestinationType, TArray<class UWBP_ItemBoxIcon_C*>* ItemList);
	void Get_Select_Other_Type_List(TArray<class UWBP_ItemBoxIcon_C*>* ItemList);
	void Add_Item_Storage_Scroll_List(bool* bIsOver, bool* bISCanNotLost);
	void Add_Item_Bag_Scroll_List(E_ItemBoxDestinationType DestinationType, bool* bIsOver);
	void Add_Other_Belongings(bool* Over, bool* Param_CanNotLostOther, bool* Overlapping);
	void IsDestinationItem(int32 ItemId, EItemType ItemType, E_ItemBoxDestinationType Destination, bool* Param_Result);
	void Get_Stack_Over_Sale_Over_Sale_Price(bool* bOver, int32* OverPlaceMax, bool* bUseMin, int32* OverPlaceMin, int32* WarrantyPrice);
	void Get_Select_List(TArray<int32>* SelectedElement);
	void IsAddItem(const struct FSBItemBoxContentParam& SBItemBoxContentParam, bool* IsAdd);
	void Is_Overlapping(ESBRewardItemType Selection, int32 InId, bool* bOverlapping);
	void Get_Item_Num(const TArray<class UWBP_ItemBoxIcon_C*>& TargetArray, int32* NuM, int32* Max1, int32* Min1);
	void Is_Select_Item(int32 ID, bool* bSelect);
	void GetAmount_RewardType(ESBRewardItemType Selection, int32 InId, int32* Amoun);
	void Get_Item_Num_Random(TArray<class UWBP_ItemBoxIcon_C*>& NewLocalVar_01, int32 Cnt, int32* Param_Result);
	void IsItemBoxGenderCheck(int32 ItemId, bool* IsWarning);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_ItemBox_C">();
	}
	static class UWBP_ItemBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_ItemBox_C>();
	}
};
static_assert(alignof(UWBP_ItemBox_C) == 0x000008, "Wrong alignment on UWBP_ItemBox_C");
static_assert(sizeof(UWBP_ItemBox_C) == 0x0005E0, "Wrong size on UWBP_ItemBox_C");
static_assert(offsetof(UWBP_ItemBox_C, UberGraphFrame) == 0x0002B0, "Member 'UWBP_ItemBox_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, AnimOut) == 0x0002B8, "Member 'UWBP_ItemBox_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, AnimIn) == 0x0002C0, "Member 'UWBP_ItemBox_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Button1_OK) == 0x0002C8, "Member 'UWBP_ItemBox_C::Button1_OK' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CanvasPanel_0) == 0x0002D0, "Member 'UWBP_ItemBox_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CheckBox_Money) == 0x0002D8, "Member 'UWBP_ItemBox_C::CheckBox_Money' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CheckBox_Stack) == 0x0002E0, "Member 'UWBP_ItemBox_C::CheckBox_Stack' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CmnClose02) == 0x0002E8, "Member 'UWBP_ItemBox_C::CmnClose02' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, EquipmentWarning) == 0x0002F0, "Member 'UWBP_ItemBox_C::EquipmentWarning' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, IconGridPanel) == 0x0002F8, "Member 'UWBP_ItemBox_C::IconGridPanel' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, IconWarning1) == 0x000300, "Member 'UWBP_ItemBox_C::IconWarning1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, IconWarning2) == 0x000308, "Member 'UWBP_ItemBox_C::IconWarning2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image) == 0x000310, "Member 'UWBP_ItemBox_C::Image' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_1) == 0x000318, "Member 'UWBP_ItemBox_C::Image_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_2) == 0x000320, "Member 'UWBP_ItemBox_C::Image_2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_3) == 0x000328, "Member 'UWBP_ItemBox_C::Image_3' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_57) == 0x000330, "Member 'UWBP_ItemBox_C::Image_57' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_224) == 0x000338, "Member 'UWBP_ItemBox_C::Image_224' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_622) == 0x000340, "Member 'UWBP_ItemBox_C::Image_622' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_723) == 0x000348, "Member 'UWBP_ItemBox_C::Image_723' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Image_863) == 0x000350, "Member 'UWBP_ItemBox_C::Image_863' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon01) == 0x000358, "Member 'UWBP_ItemBox_C::ItemIcon01' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon02) == 0x000360, "Member 'UWBP_ItemBox_C::ItemIcon02' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon03) == 0x000368, "Member 'UWBP_ItemBox_C::ItemIcon03' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon04) == 0x000370, "Member 'UWBP_ItemBox_C::ItemIcon04' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon05) == 0x000378, "Member 'UWBP_ItemBox_C::ItemIcon05' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon06) == 0x000380, "Member 'UWBP_ItemBox_C::ItemIcon06' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon07) == 0x000388, "Member 'UWBP_ItemBox_C::ItemIcon07' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon08) == 0x000390, "Member 'UWBP_ItemBox_C::ItemIcon08' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon09) == 0x000398, "Member 'UWBP_ItemBox_C::ItemIcon09' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon10) == 0x0003A0, "Member 'UWBP_ItemBox_C::ItemIcon10' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon11) == 0x0003A8, "Member 'UWBP_ItemBox_C::ItemIcon11' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon12) == 0x0003B0, "Member 'UWBP_ItemBox_C::ItemIcon12' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon13) == 0x0003B8, "Member 'UWBP_ItemBox_C::ItemIcon13' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon14) == 0x0003C0, "Member 'UWBP_ItemBox_C::ItemIcon14' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon15) == 0x0003C8, "Member 'UWBP_ItemBox_C::ItemIcon15' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon16) == 0x0003D0, "Member 'UWBP_ItemBox_C::ItemIcon16' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon17) == 0x0003D8, "Member 'UWBP_ItemBox_C::ItemIcon17' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon18) == 0x0003E0, "Member 'UWBP_ItemBox_C::ItemIcon18' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon19) == 0x0003E8, "Member 'UWBP_ItemBox_C::ItemIcon19' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemIcon20) == 0x0003F0, "Member 'UWBP_ItemBox_C::ItemIcon20' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, MoneyOverCheck) == 0x0003F8, "Member 'UWBP_ItemBox_C::MoneyOverCheck' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Name_WBP_ItemBox_C) == 0x000400, "Member 'UWBP_ItemBox_C::Name_WBP_ItemBox_C' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OKButtonErrorCheck) == 0x000408, "Member 'UWBP_ItemBox_C::OKButtonErrorCheck' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OKButtonErrorTxt) == 0x000410, "Member 'UWBP_ItemBox_C::OKButtonErrorTxt' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ResultScrollBox) == 0x000418, "Member 'UWBP_ItemBox_C::ResultScrollBox' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SBButtonTransparent) == 0x000420, "Member 'UWBP_ItemBox_C::SBButtonTransparent' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SelectMaxNumText) == 0x000428, "Member 'UWBP_ItemBox_C::SelectMaxNumText' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SelectNamText) == 0x000430, "Member 'UWBP_ItemBox_C::SelectNamText' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SelectNum) == 0x000438, "Member 'UWBP_ItemBox_C::SelectNum' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, StackOverCheck) == 0x000440, "Member 'UWBP_ItemBox_C::StackOverCheck' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt1_1) == 0x000448, "Member 'UWBP_ItemBox_C::Txt1_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt_Comment_1) == 0x000450, "Member 'UWBP_ItemBox_C::Txt_Comment_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt_Comment_StackOverCheck) == 0x000458, "Member 'UWBP_ItemBox_C::Txt_Comment_StackOverCheck' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt_Comment_StackOverCheck_1) == 0x000460, "Member 'UWBP_ItemBox_C::Txt_Comment_StackOverCheck_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt_Recipient) == 0x000468, "Member 'UWBP_ItemBox_C::Txt_Recipient' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Txt_Title) == 0x000470, "Member 'UWBP_ItemBox_C::Txt_Title' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, UIBlocker) == 0x000478, "Member 'UWBP_ItemBox_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, UIBlocker2) == 0x000480, "Member 'UWBP_ItemBox_C::UIBlocker2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxImage) == 0x000488, "Member 'UWBP_ItemBox_C::WBP_ItemBoxImage' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper) == 0x000490, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper_1) == 0x000498, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper_1' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper_2) == 0x0004A0, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper_2' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper_291) == 0x0004A8, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper_291' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper_391) == 0x0004B0, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper_391' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, WBP_ItemBoxScrollText_Wrapper_530) == 0x0004B8, "Member 'UWBP_ItemBox_C::WBP_ItemBoxScrollText_Wrapper_530' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Result) == 0x0004C0, "Member 'UWBP_ItemBox_C::Result' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, RepeatPlusButton) == 0x0004C1, "Member 'UWBP_ItemBox_C::RepeatPlusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, RepeatMinusButton) == 0x0004C2, "Member 'UWBP_ItemBox_C::RepeatMinusButton' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, MainWidget) == 0x0004C8, "Member 'UWBP_ItemBox_C::MainWidget' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, IsClosing) == 0x0004D0, "Member 'UWBP_ItemBox_C::IsClosing' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OnEnd) == 0x0004D8, "Member 'UWBP_ItemBox_C::OnEnd' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, InventoryItemData) == 0x0004E8, "Member 'UWBP_ItemBox_C::InventoryItemData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SelectMaxNum) == 0x000548, "Member 'UWBP_ItemBox_C::SelectMaxNum' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, SelectButtonList) == 0x000550, "Member 'UWBP_ItemBox_C::SelectButtonList' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, TestItemType) == 0x000560, "Member 'UWBP_ItemBox_C::TestItemType' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, TestItemID) == 0x000570, "Member 'UWBP_ItemBox_C::TestItemID' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ListCount) == 0x000580, "Member 'UWBP_ItemBox_C::ListCount' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OverItemList) == 0x000588, "Member 'UWBP_ItemBox_C::OverItemList' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OverItemCanNotLost) == 0x000598, "Member 'UWBP_ItemBox_C::OverItemCanNotLost' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, ItemBoxData) == 0x0005A0, "Member 'UWBP_ItemBox_C::ItemBoxData' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, OverOther_) == 0x0005C0, "Member 'UWBP_ItemBox_C::OverOther_' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CanNotLostOther) == 0x0005C1, "Member 'UWBP_ItemBox_C::CanNotLostOther' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, BPPointNow) == 0x0005C4, "Member 'UWBP_ItemBox_C::BPPointNow' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, RoseorbNow) == 0x0005C8, "Member 'UWBP_ItemBox_C::RoseorbNow' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, LoadWitCnt) == 0x0005CC, "Member 'UWBP_ItemBox_C::LoadWitCnt' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, Blocker) == 0x0005D0, "Member 'UWBP_ItemBox_C::Blocker' has a wrong offset!");
static_assert(offsetof(UWBP_ItemBox_C, CanNotLostItemStorage) == 0x0005D8, "Member 'UWBP_ItemBox_C::CanNotLostItemStorage' has a wrong offset!");

}

