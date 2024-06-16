#pragma once

 

// Package: MailList_attachment

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailList_attachment.MailList_attachment_C
// 0x00C0 (0x0338 - 0x0278)
class UMailList_attachment_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 AttachmentBg;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        AttentionWidgetSwitcher;                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           IconGrp;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Equip;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Item;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Other;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Money;                                             // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    MoneyAmount;                                       // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Amount;                                        // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Type;                                          // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageType;                                    // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBMailAttachment                      AttachmentData;                                    // 0x02F0(0x0040)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                          IsAccount;                                         // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          SetupSkipFlag;                                     // 0x0331(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsMailAcceptWindow;                                // 0x0332(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                          IsMailAcceptResult;                                // 0x0333(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

public:
	void ExecuteUbergraph_MailList_attachment(int32 EntryPoint);
	void Initialize();
	void Construct();
	void SetMoney(int32 Amount);
	void SetViewType(ESBMailAttachmentViewType Type);
	void SetAttentionStatus(int32 Status);
	void UpdateIconExtraData();
	void UpdateStorageIcon();
	void SetToolTips();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailList_attachment_C">();
	}
	static class UMailList_attachment_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailList_attachment_C>();
	}
};
static_assert(alignof(UMailList_attachment_C) == 0x000008, "Wrong alignment on UMailList_attachment_C");
static_assert(sizeof(UMailList_attachment_C) == 0x000338, "Wrong size on UMailList_attachment_C");
static_assert(offsetof(UMailList_attachment_C, UberGraphFrame) == 0x000278, "Member 'UMailList_attachment_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, AttachmentBg) == 0x000280, "Member 'UMailList_attachment_C::AttachmentBg' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, AttentionWidgetSwitcher) == 0x000288, "Member 'UMailList_attachment_C::AttentionWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, CommonIcon) == 0x000290, "Member 'UMailList_attachment_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, IconGrp) == 0x000298, "Member 'UMailList_attachment_C::IconGrp' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Img_Bag) == 0x0002A0, "Member 'UMailList_attachment_C::Img_Bag' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Img_Bag_Equip) == 0x0002A8, "Member 'UMailList_attachment_C::Img_Bag_Equip' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Img_Bag_Item) == 0x0002B0, "Member 'UMailList_attachment_C::Img_Bag_Item' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Img_Other) == 0x0002B8, "Member 'UMailList_attachment_C::Img_Other' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Img_Storage) == 0x0002C0, "Member 'UMailList_attachment_C::Img_Storage' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Money) == 0x0002C8, "Member 'UMailList_attachment_C::Money' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, MoneyAmount) == 0x0002D0, "Member 'UMailList_attachment_C::MoneyAmount' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Txt_Amount) == 0x0002D8, "Member 'UMailList_attachment_C::Txt_Amount' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, Txt_Type) == 0x0002E0, "Member 'UMailList_attachment_C::Txt_Type' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, WS_StorageType) == 0x0002E8, "Member 'UMailList_attachment_C::WS_StorageType' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, AttachmentData) == 0x0002F0, "Member 'UMailList_attachment_C::AttachmentData' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, IsAccount) == 0x000330, "Member 'UMailList_attachment_C::IsAccount' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, SetupSkipFlag) == 0x000331, "Member 'UMailList_attachment_C::SetupSkipFlag' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, IsMailAcceptWindow) == 0x000332, "Member 'UMailList_attachment_C::IsMailAcceptWindow' has a wrong offset!");
static_assert(offsetof(UMailList_attachment_C, IsMailAcceptResult) == 0x000333, "Member 'UMailList_attachment_C::IsMailAcceptResult' has a wrong offset!");

}

