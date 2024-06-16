#pragma once

 

// Package: MailAttachmentAcceptBody

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass MailAttachmentAcceptBody.MailAttachmentAcceptBody_C
// 0x00B8 (0x0330 - 0x0278)
class UMailAttachmentAcceptBody_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 Img_Overflow;                                      // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line1;                                             // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Line2;                                             // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    NowAmountText;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    SBRuntimeTextBlock_837;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                              ScaleBox_4;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Accept;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Cap;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_ItemName;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Txt_Now;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        WarningWidgetSwitcher;                             // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSBMailAttachment                      AttachmentData;                                    // 0x02D8(0x0040)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                          bIsOverFlow;                                       // 0x0318(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_50AB[0x3];                                     // 0x0319(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StorageCheckSize;                                  // 0x031C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         StorageNowCount;                                   // 0x0320(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         OverflowType;                                      // 0x0324(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bIsDuplicate;                                      // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_MailAttachmentAcceptBody(int32 EntryPoint);
	void Set_Attachment(const struct FSBMailAttachment& Param_AttachmentData);
	void IsOverflow(bool* Overflow);
	void AttachmentWork_Item();
	void AttachmentWork_Weapon();
	void SetCountOnly(bool CountOnly);
	void SetStorageSize(int32 SizeNum, int32 CountNum);
	void SetAccept(int32 Count);
	void AttachmentWork_Orb();
	void GetOverflowType(int32* Type);
	void AttachmentWork_Recipe();
	void AttachmentWork_Emote();
	void AttachmentWork_Stamp();
	void AttachmentWork_Achievement();
	void AttachmentWork_RankPoint();
	void AttachmentWork_Ability();
	void AttachmentWork_Token();
	void IsDuplicate(bool* Duplicate);
	void AttachmentWork_BPPoint();
	void AttachmentWork_AdventureBoard();
	void AttachmentWork_LiquidMemory();
	void AttachmentWork_Award();
	void AttachmentWork_AdventurerCardDecolations();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"MailAttachmentAcceptBody_C">();
	}
	static class UMailAttachmentAcceptBody_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UMailAttachmentAcceptBody_C>();
	}
};
static_assert(alignof(UMailAttachmentAcceptBody_C) == 0x000008, "Wrong alignment on UMailAttachmentAcceptBody_C");
static_assert(sizeof(UMailAttachmentAcceptBody_C) == 0x000330, "Wrong size on UMailAttachmentAcceptBody_C");
static_assert(offsetof(UMailAttachmentAcceptBody_C, UberGraphFrame) == 0x000278, "Member 'UMailAttachmentAcceptBody_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Img_Overflow) == 0x000280, "Member 'UMailAttachmentAcceptBody_C::Img_Overflow' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Line1) == 0x000288, "Member 'UMailAttachmentAcceptBody_C::Line1' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Line2) == 0x000290, "Member 'UMailAttachmentAcceptBody_C::Line2' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, NowAmountText) == 0x000298, "Member 'UMailAttachmentAcceptBody_C::NowAmountText' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, SBRuntimeTextBlock_837) == 0x0002A0, "Member 'UMailAttachmentAcceptBody_C::SBRuntimeTextBlock_837' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, ScaleBox_4) == 0x0002A8, "Member 'UMailAttachmentAcceptBody_C::ScaleBox_4' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Txt_Accept) == 0x0002B0, "Member 'UMailAttachmentAcceptBody_C::Txt_Accept' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Txt_Cap) == 0x0002B8, "Member 'UMailAttachmentAcceptBody_C::Txt_Cap' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Txt_ItemName) == 0x0002C0, "Member 'UMailAttachmentAcceptBody_C::Txt_ItemName' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, Txt_Now) == 0x0002C8, "Member 'UMailAttachmentAcceptBody_C::Txt_Now' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, WarningWidgetSwitcher) == 0x0002D0, "Member 'UMailAttachmentAcceptBody_C::WarningWidgetSwitcher' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, AttachmentData) == 0x0002D8, "Member 'UMailAttachmentAcceptBody_C::AttachmentData' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, bIsOverFlow) == 0x000318, "Member 'UMailAttachmentAcceptBody_C::bIsOverFlow' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, StorageCheckSize) == 0x00031C, "Member 'UMailAttachmentAcceptBody_C::StorageCheckSize' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, StorageNowCount) == 0x000320, "Member 'UMailAttachmentAcceptBody_C::StorageNowCount' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, OverflowType) == 0x000324, "Member 'UMailAttachmentAcceptBody_C::OverflowType' has a wrong offset!");
static_assert(offsetof(UMailAttachmentAcceptBody_C, bIsDuplicate) == 0x000328, "Member 'UMailAttachmentAcceptBody_C::bIsDuplicate' has a wrong offset!");

}

