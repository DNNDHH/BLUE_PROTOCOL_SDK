#pragma once

 

// Package: MailAttachmentAcceptHead

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailAttachmentAcceptHead.MailAttachmentAcceptHead_C
// 0x00B8 (0x0330 - 0x0278)
class UMailAttachmentAcceptHead_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UExpandableArea*                        Expandable;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Overflow;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Overflow_1;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Overflow_2;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HB_Overflow_3;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image;                                             // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_135;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag;                                           // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Equip;                                     // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Bag_Item;                                      // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Other;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Img_Storage;                                       // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_StorageName;                                   // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VB_AttachBox;                                      // 0x0300(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WarningWidgetSwitcher;                             // 0x0308(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WS_StorageType;                                    // 0x0310(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FSBMailAttachment>              Attachments;                                       // 0x0318(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                         StorageNo;                                         // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          AcceptFlag;                                        // 0x032C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MailAttachmentAcceptHead(int32 EntryPoint);
	void BndEvt__MailAttachmentAcceptHead_Expandable_K2Node_ComponentBoundEvent_0_OnExpandableAreaExpansionChanged__DelegateSignature(class UExpandableArea* Area, bool bIsExpanded);
	void AddAttachment(const struct FSBMailAttachment& InAttachment);
	void SetStorageNo(int32 Param_StorageNo);
	void PreConstruct(bool IsDesignTime);
	void Get_Storage_Text(int32 Param_StorageNo, class FText* Text);
	void FindAttachments(const struct FSBMailAttachment& Find, int32* Attachment);
	void GenerateAttachmentList();
	void IsAnyOverFlow(bool* Overflow);
	void IsAnyDuplicate(bool* Duplicate);
	void IsAccepted(bool* Accept);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailAttachmentAcceptHead_C">();
	}
	static class UMailAttachmentAcceptHead_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailAttachmentAcceptHead_C>();
	}
};
static_assert(alignof(UMailAttachmentAcceptHead_C) == 0x000008, "Wrong alignment on UMailAttachmentAcceptHead_C");
static_assert(sizeof(UMailAttachmentAcceptHead_C) == 0x000330, "Wrong size on UMailAttachmentAcceptHead_C");
static_assert(offsetof(UMailAttachmentAcceptHead_C, UberGraphFrame) == 0x000278, "Member 'UMailAttachmentAcceptHead_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, BG) == 0x000280, "Member 'UMailAttachmentAcceptHead_C::BG' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Expandable) == 0x000288, "Member 'UMailAttachmentAcceptHead_C::Expandable' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, HB_Overflow) == 0x000290, "Member 'UMailAttachmentAcceptHead_C::HB_Overflow' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, HB_Overflow_1) == 0x000298, "Member 'UMailAttachmentAcceptHead_C::HB_Overflow_1' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, HB_Overflow_2) == 0x0002A0, "Member 'UMailAttachmentAcceptHead_C::HB_Overflow_2' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, HB_Overflow_3) == 0x0002A8, "Member 'UMailAttachmentAcceptHead_C::HB_Overflow_3' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Image) == 0x0002B0, "Member 'UMailAttachmentAcceptHead_C::Image' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Image_1) == 0x0002B8, "Member 'UMailAttachmentAcceptHead_C::Image_1' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Image_2) == 0x0002C0, "Member 'UMailAttachmentAcceptHead_C::Image_2' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Image_135) == 0x0002C8, "Member 'UMailAttachmentAcceptHead_C::Image_135' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Img_Bag) == 0x0002D0, "Member 'UMailAttachmentAcceptHead_C::Img_Bag' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Img_Bag_Equip) == 0x0002D8, "Member 'UMailAttachmentAcceptHead_C::Img_Bag_Equip' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Img_Bag_Item) == 0x0002E0, "Member 'UMailAttachmentAcceptHead_C::Img_Bag_Item' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Img_Other) == 0x0002E8, "Member 'UMailAttachmentAcceptHead_C::Img_Other' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Img_Storage) == 0x0002F0, "Member 'UMailAttachmentAcceptHead_C::Img_Storage' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Txt_StorageName) == 0x0002F8, "Member 'UMailAttachmentAcceptHead_C::Txt_StorageName' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, VB_AttachBox) == 0x000300, "Member 'UMailAttachmentAcceptHead_C::VB_AttachBox' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, WarningWidgetSwitcher) == 0x000308, "Member 'UMailAttachmentAcceptHead_C::WarningWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, WS_StorageType) == 0x000310, "Member 'UMailAttachmentAcceptHead_C::WS_StorageType' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, Attachments) == 0x000318, "Member 'UMailAttachmentAcceptHead_C::Attachments' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, StorageNo) == 0x000328, "Member 'UMailAttachmentAcceptHead_C::StorageNo' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptHead_C, AcceptFlag) == 0x00032C, "Member 'UMailAttachmentAcceptHead_C::AcceptFlag' has a wrong offset!");

}

