#pragma once

 

// Package: MailListAttachmentAcceptedResult

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "EAcceptWindowType_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailListAttachmentAcceptedResult.MailListAttachmentAcceptedResult_C
// 0x00B0 (0x0328 - 0x0278)
class UMailListAttachmentAcceptedResult_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButtonFullScreen_C*                  Btn_BackClose;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ContinueUse_1;                                 // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Btn_ContinueUseSizeBox;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_Ok_1;                                          // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               Btn_OKSizeBox;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCmnClose03_C*                          CmnClose03;                                        // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        IconWidgetSwitcher;                                // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Continue_1;                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_Ok_1;                           // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_Container;                                      // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnClose;                                           // 0x02F0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UMailListAttachmentContainerBox_C*      Storage;                                           // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailListAttachmentContainerBox_C*      ItemBag;                                           // 0x0308(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailListAttachmentContainerBox_C*      EquipBag;                                          // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMailListAttachmentContainerBox_C*      Other;                                             // 0x0318(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bItemGenerated;                                    // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EAcceptWindowType                             AcceptWindowType;                                  // 0x0321(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_87C0[0x2];                                     // 0x0322(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         SellMoneyNum;                                      // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnClose__DelegateSignature();
	void ExecuteUbergraph_MailListAttachmentAcceptedResult(int32 EntryPoint);
	void ESCClose();
	void WidgetAnimationEvt_AnimOut_K2Node_WidgetAnimationEvent_0();
	void BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailListAttachmentAcceptedResult_Btn_OK_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailListAttachmentAcceptedResult_Btn_ContinueUse_1_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MailListAttachmentAcceptedResult_CmnClose03_K2Node_ComponentBoundEvent_4_OnClosed__DelegateSignature();
	void Set_Data(const struct FSBMailRewardData& Data);
	void Close();
	void BndEvt__Btn_BackClose_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void Achievement_SetData(const struct FSBAchievementRewardData& Data);
	void SetItemGenerated(const struct FOwnItemInfo& OwnItemInfo);
	void SetSallItemData(struct FSBMailRewardData& RewardData);
	void SetData_Work(const struct FSBMailRewardData& Data);
	void CalcSellData(const struct FOwnItemInfo& OwnItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailListAttachmentAcceptedResult_C">();
	}
	static class UMailListAttachmentAcceptedResult_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailListAttachmentAcceptedResult_C>();
	}
};
static_assert(alignof(UMailListAttachmentAcceptedResult_C) == 0x000008, "Wrong alignment on UMailListAttachmentAcceptedResult_C");
static_assert(sizeof(UMailListAttachmentAcceptedResult_C) == 0x000328, "Wrong size on UMailListAttachmentAcceptedResult_C");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, UberGraphFrame) == 0x000278, "Member 'UMailListAttachmentAcceptedResult_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, AnimOut) == 0x000280, "Member 'UMailListAttachmentAcceptedResult_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, AnimIn) == 0x000288, "Member 'UMailListAttachmentAcceptedResult_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Bg1) == 0x000290, "Member 'UMailListAttachmentAcceptedResult_C::Bg1' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Bg2) == 0x000298, "Member 'UMailListAttachmentAcceptedResult_C::Bg2' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Btn_BackClose) == 0x0002A0, "Member 'UMailListAttachmentAcceptedResult_C::Btn_BackClose' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Btn_ContinueUse_1) == 0x0002A8, "Member 'UMailListAttachmentAcceptedResult_C::Btn_ContinueUse_1' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Btn_ContinueUseSizeBox) == 0x0002B0, "Member 'UMailListAttachmentAcceptedResult_C::Btn_ContinueUseSizeBox' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Btn_Ok_1) == 0x0002B8, "Member 'UMailListAttachmentAcceptedResult_C::Btn_Ok_1' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Btn_OKSizeBox) == 0x0002C0, "Member 'UMailListAttachmentAcceptedResult_C::Btn_OKSizeBox' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, CmnClose03) == 0x0002C8, "Member 'UMailListAttachmentAcceptedResult_C::CmnClose03' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, IconWidgetSwitcher) == 0x0002D0, "Member 'UMailListAttachmentAcceptedResult_C::IconWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, SBRuntimeTextBlock_Continue_1) == 0x0002D8, "Member 'UMailListAttachmentAcceptedResult_C::SBRuntimeTextBlock_Continue_1' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, SBRuntimeTextBlock_Ok_1) == 0x0002E0, "Member 'UMailListAttachmentAcceptedResult_C::SBRuntimeTextBlock_Ok_1' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, VB_Container) == 0x0002E8, "Member 'UMailListAttachmentAcceptedResult_C::VB_Container' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, OnClose) == 0x0002F0, "Member 'UMailListAttachmentAcceptedResult_C::OnClose' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Storage) == 0x000300, "Member 'UMailListAttachmentAcceptedResult_C::Storage' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, ItemBag) == 0x000308, "Member 'UMailListAttachmentAcceptedResult_C::ItemBag' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, EquipBag) == 0x000310, "Member 'UMailListAttachmentAcceptedResult_C::EquipBag' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, Other) == 0x000318, "Member 'UMailListAttachmentAcceptedResult_C::Other' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, bItemGenerated) == 0x000320, "Member 'UMailListAttachmentAcceptedResult_C::bItemGenerated' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, AcceptWindowType) == 0x000321, "Member 'UMailListAttachmentAcceptedResult_C::AcceptWindowType' has a wrong offset!");
static_assert(offsetof(UMailListAttachmentAcceptedResult_C, SellMoneyNum) == 0x000324, "Member 'UMailListAttachmentAcceptedResult_C::SellMoneyNum' has a wrong offset!");

}

