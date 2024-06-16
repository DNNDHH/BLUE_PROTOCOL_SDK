#pragma once

 

// Package: MailAttachmentsAcceptWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"
#include "UMG_structs.hpp"
#include "EAcceptWindowType_structs.hpp"
#include "SlateCore_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailAttachmentsAcceptWindow.MailAttachmentsAcceptWindow_C
// 0x01F8 (0x0470 - 0x0278)
class UMailAttachmentsAcceptWindow_C final : public USBMailAttachmentAcceptBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Accept;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_BackClose;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ItemDetails;                                   // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_DisappearToken;                                 // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBCheckBox_C*                          CB_OverflowSellItem;                               // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    CharacterName;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBComboBoxCmn01_C*                     Cmb_ViewType;                                      // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CVS_Token;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                             Grid_ItemDisplay;                                  // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Icon_Arrow;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconWarning;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconWidgetSwitcher;                                // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemDetailsText;                                   // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemDisplayWarningText;                            // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    ItemName;                                          // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_1;                                            // 0x0320(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line_3;                                            // 0x0328(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LunoValue;                                         // 0x0330(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           OverflowSellItem;                                  // 0x0338(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        ReceiveWidgetSwitcher;                             // 0x0340(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardValue;                                       // 0x0348(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardValue_1;                                     // 0x0350(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardValue_2;                                     // 0x0358(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             RewardValue_3;                                     // 0x0360(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                             SB_AcceptList;                                     // 0x0368(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_4;                              // 0x0370(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_6;                              // 0x0378(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_1589;                           // 0x0380(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UShowTutorialHelpBtn_C*                 ShowTutorialHelpBtn;                               // 0x0388(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        TitleWidgetSwitcher;                               // 0x0390(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_AcceptVanishItem;                              // 0x0398(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Overflow;                                      // 0x03A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUIBlocker_C*                           UIBlocker;                                         // 0x03A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Warning_Acount;                                    // 0x03B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Warning_Transfer;                                  // 0x03B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x03C0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                         GridItemNum;                                       // 0x03D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4F06[0x4];                                     // 0x03D4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FSBMailData>                    MailDatas;                                         // 0x03D8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnRequesting;                                      // 0x03E8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsOverflowItem;                                    // 0x03F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4F07[0x7];                                     // 0x03F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FString, ESBMailAttachmentViewType> ViewTypeData;                                      // 0x0400(0x0050)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_ProductDetailMenu_C*               ProductDetail;                                     // 0x0450(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EAcceptWindowType                             AcceptWindowType;                                  // 0x0458(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_4F08[0x3];                                     // 0x0459(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StorageCount;                                      // 0x045C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Equip_Count;                                       // 0x0460(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Bag_Count;                                         // 0x0464(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CapacityOver;                                      // 0x0468(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnClose__DelegateSignature();
	void OnRequesting__DelegateSignature();
	void ExecuteUbergraph_MailAttachmentsAcceptWindow(int32 EntryPoint);
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void OnCloseDetail(class UUMG_ProductDetailMenu_C* Sender);
	void BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailAttachmentsAcceptWindow_Btn_ItemDetails_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailAttachmentsAcceptWindow_CmnClose03_K2Node_ComponentBoundEvent_7_OnClosed__DelegateSignature();
	void BndEvt__MailAttachmentsAcceptWindow_Cmb_ViewType_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
	void UI_Cancel();
	void BndEvt__CB_OverflowSellItem_K2Node_ComponentBoundEvent_6_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__CB_DisappearToken_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_Accept_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void SetMailData(TArray<struct FSBMailData>& Param_MailDatas);
	void Close();
	void BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void GenerateAttachmentGrid();
	void GenerateStorageList();
	void GenerateMailIds(TArray<class FString>* List1);
	void UpdateAcceptButtonEnable();
	void CheckStorageCapacities();
	void GenerateVisibleList();
	void UpdateViewType(const class FString& Type);
	void UpdateCheckBoxVisibility();
	class UWidget* On_Cmb_ViewType_GenerateWidget_0(const class FString& Item);
	void CheckEquip(bool* Equip);
	void SetAcceptWindowTitle();
	void SetWarningText();
	void AcceptFlagCheck(bool* AcceptFlag);
	void CheckLimitOver(const TArray<struct FSBMailData>& MailData, int32* SelectValue);

	void GetMailDatas(TArray<struct FSBMailData>* Param_MailDatas) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailAttachmentsAcceptWindow_C">();
	}
	static class UMailAttachmentsAcceptWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailAttachmentsAcceptWindow_C>();
	}
};
static_assert(alignof(UMailAttachmentsAcceptWindow_C) == 0x000008, "Wrong alignment on UMailAttachmentsAcceptWindow_C");
static_assert(sizeof(UMailAttachmentsAcceptWindow_C) == 0x000470, "Wrong size on UMailAttachmentsAcceptWindow_C");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, UberGraphFrame) == 0x000278, "Member 'UMailAttachmentsAcceptWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, AnimOut) == 0x000280, "Member 'UMailAttachmentsAcceptWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, AnimIn) == 0x000288, "Member 'UMailAttachmentsAcceptWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, BG) == 0x000290, "Member 'UMailAttachmentsAcceptWindow_C::BG' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Btn_Accept) == 0x000298, "Member 'UMailAttachmentsAcceptWindow_C::Btn_Accept' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Btn_BackClose) == 0x0002A0, "Member 'UMailAttachmentsAcceptWindow_C::Btn_BackClose' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Btn_ItemDetails) == 0x0002A8, "Member 'UMailAttachmentsAcceptWindow_C::Btn_ItemDetails' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CB_DisappearToken) == 0x0002B0, "Member 'UMailAttachmentsAcceptWindow_C::CB_DisappearToken' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CB_OverflowSellItem) == 0x0002B8, "Member 'UMailAttachmentsAcceptWindow_C::CB_OverflowSellItem' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CharacterName) == 0x0002C0, "Member 'UMailAttachmentsAcceptWindow_C::CharacterName' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Cmb_ViewType) == 0x0002C8, "Member 'UMailAttachmentsAcceptWindow_C::Cmb_ViewType' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CmnClose03) == 0x0002D0, "Member 'UMailAttachmentsAcceptWindow_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CVS_Token) == 0x0002D8, "Member 'UMailAttachmentsAcceptWindow_C::CVS_Token' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Grid_ItemDisplay) == 0x0002E0, "Member 'UMailAttachmentsAcceptWindow_C::Grid_ItemDisplay' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Icon_Arrow) == 0x0002E8, "Member 'UMailAttachmentsAcceptWindow_C::Icon_Arrow' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, IconWarning) == 0x0002F0, "Member 'UMailAttachmentsAcceptWindow_C::IconWarning' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, IconWidgetSwitcher) == 0x0002F8, "Member 'UMailAttachmentsAcceptWindow_C::IconWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ItemDetailsText) == 0x000300, "Member 'UMailAttachmentsAcceptWindow_C::ItemDetailsText' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ItemDisplayWarningText) == 0x000308, "Member 'UMailAttachmentsAcceptWindow_C::ItemDisplayWarningText' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ItemName) == 0x000310, "Member 'UMailAttachmentsAcceptWindow_C::ItemName' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Line) == 0x000318, "Member 'UMailAttachmentsAcceptWindow_C::Line' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Line_1) == 0x000320, "Member 'UMailAttachmentsAcceptWindow_C::Line_1' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Line_3) == 0x000328, "Member 'UMailAttachmentsAcceptWindow_C::Line_3' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, LunoValue) == 0x000330, "Member 'UMailAttachmentsAcceptWindow_C::LunoValue' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, OverflowSellItem) == 0x000338, "Member 'UMailAttachmentsAcceptWindow_C::OverflowSellItem' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ReceiveWidgetSwitcher) == 0x000340, "Member 'UMailAttachmentsAcceptWindow_C::ReceiveWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, RewardValue) == 0x000348, "Member 'UMailAttachmentsAcceptWindow_C::RewardValue' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, RewardValue_1) == 0x000350, "Member 'UMailAttachmentsAcceptWindow_C::RewardValue_1' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, RewardValue_2) == 0x000358, "Member 'UMailAttachmentsAcceptWindow_C::RewardValue_2' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, RewardValue_3) == 0x000360, "Member 'UMailAttachmentsAcceptWindow_C::RewardValue_3' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, SB_AcceptList) == 0x000368, "Member 'UMailAttachmentsAcceptWindow_C::SB_AcceptList' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, SBRuntimeTextBlock_4) == 0x000370, "Member 'UMailAttachmentsAcceptWindow_C::SBRuntimeTextBlock_4' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, SBRuntimeTextBlock_6) == 0x000378, "Member 'UMailAttachmentsAcceptWindow_C::SBRuntimeTextBlock_6' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, SBRuntimeTextBlock_1589) == 0x000380, "Member 'UMailAttachmentsAcceptWindow_C::SBRuntimeTextBlock_1589' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ShowTutorialHelpBtn) == 0x000388, "Member 'UMailAttachmentsAcceptWindow_C::ShowTutorialHelpBtn' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, TitleWidgetSwitcher) == 0x000390, "Member 'UMailAttachmentsAcceptWindow_C::TitleWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Txt_AcceptVanishItem) == 0x000398, "Member 'UMailAttachmentsAcceptWindow_C::Txt_AcceptVanishItem' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Txt_Overflow) == 0x0003A0, "Member 'UMailAttachmentsAcceptWindow_C::Txt_Overflow' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, UIBlocker) == 0x0003A8, "Member 'UMailAttachmentsAcceptWindow_C::UIBlocker' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Warning_Acount) == 0x0003B0, "Member 'UMailAttachmentsAcceptWindow_C::Warning_Acount' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Warning_Transfer) == 0x0003B8, "Member 'UMailAttachmentsAcceptWindow_C::Warning_Transfer' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, OnClose) == 0x0003C0, "Member 'UMailAttachmentsAcceptWindow_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, GridItemNum) == 0x0003D0, "Member 'UMailAttachmentsAcceptWindow_C::GridItemNum' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, MailDatas) == 0x0003D8, "Member 'UMailAttachmentsAcceptWindow_C::MailDatas' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, OnRequesting) == 0x0003E8, "Member 'UMailAttachmentsAcceptWindow_C::OnRequesting' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, IsOverflowItem) == 0x0003F8, "Member 'UMailAttachmentsAcceptWindow_C::IsOverflowItem' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ViewTypeData) == 0x000400, "Member 'UMailAttachmentsAcceptWindow_C::ViewTypeData' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, ProductDetail) == 0x000450, "Member 'UMailAttachmentsAcceptWindow_C::ProductDetail' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, AcceptWindowType) == 0x000458, "Member 'UMailAttachmentsAcceptWindow_C::AcceptWindowType' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, StorageCount) == 0x00045C, "Member 'UMailAttachmentsAcceptWindow_C::StorageCount' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Equip_Count) == 0x000460, "Member 'UMailAttachmentsAcceptWindow_C::Equip_Count' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, Bag_Count) == 0x000464, "Member 'UMailAttachmentsAcceptWindow_C::Bag_Count' has a wrong offset!");
static_assert(offsetof(UMailAttachmentsAcceptWindow_C, CapacityOver) == 0x000468, "Member 'UMailAttachmentsAcceptWindow_C::CapacityOver' has a wrong offset!");

}

