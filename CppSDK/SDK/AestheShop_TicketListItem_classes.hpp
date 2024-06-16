#pragma once

 

// Package: AestheShop_TicketListItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AestheShop_TicketListItem.AestheShop_TicketListItem_C
// 0x0068 (0x02E0 - 0x0278)
class UAestheShop_TicketListItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 BG;                                                // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            Btn_ListItem;                                      // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasTicket;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 CourseIcon;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 TicketIcon;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtCourseName;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtHoldingTicketAmount;                            // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TxtTicketName;                                     // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         CourseId;                                          // 0x02C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         TicketTokenId;                                     // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                         HoldTicketTokenAmount;                             // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_5B5D[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelected;                                        // 0x02D0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnSelected__DelegateSignature(int32 InCourseId, int32 InTicketTokenId, int32 InHoldTicketTokenAmount);
	void ExecuteUbergraph_AestheShop_TicketListItem(int32 EntryPoint);
	void BndEvt__SBButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SetupCourseListItem(int32 InCourseId, int32 InHoldTicketTokenAmount);
	void SetCourseIcon(TSoftObjectPtr<class UTexture2D> InIconTexture);
	void SetCourseName(const class FText& InText);
	void SetTicketName(const class FText& InText);
	void SetTicketAmount(int32 InAmount);
	void SetListItemSelected(bool IsSelected);
	void GetTicketTokenId(int32* OutTIcketTokenId);
	void GetHoldTicketTokenAmount(int32* OutAmount);
	void GetCourseId(int32* OutCourseId);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AestheShop_TicketListItem_C">();
	}
	static class UAestheShop_TicketListItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAestheShop_TicketListItem_C>();
	}
};
static_assert(alignof(UAestheShop_TicketListItem_C) == 0x000008, "Wrong alignment on UAestheShop_TicketListItem_C");
static_assert(sizeof(UAestheShop_TicketListItem_C) == 0x0002E0, "Wrong size on UAestheShop_TicketListItem_C");
static_assert(offsetof(UAestheShop_TicketListItem_C, UberGraphFrame) == 0x000278, "Member 'UAestheShop_TicketListItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, BG) == 0x000280, "Member 'UAestheShop_TicketListItem_C::BG' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, Btn_ListItem) == 0x000288, "Member 'UAestheShop_TicketListItem_C::Btn_ListItem' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, CanvasTicket) == 0x000290, "Member 'UAestheShop_TicketListItem_C::CanvasTicket' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, CourseIcon) == 0x000298, "Member 'UAestheShop_TicketListItem_C::CourseIcon' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, TicketIcon) == 0x0002A0, "Member 'UAestheShop_TicketListItem_C::TicketIcon' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, TxtCourseName) == 0x0002A8, "Member 'UAestheShop_TicketListItem_C::TxtCourseName' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, TxtHoldingTicketAmount) == 0x0002B0, "Member 'UAestheShop_TicketListItem_C::TxtHoldingTicketAmount' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, TxtTicketName) == 0x0002B8, "Member 'UAestheShop_TicketListItem_C::TxtTicketName' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, CourseId) == 0x0002C0, "Member 'UAestheShop_TicketListItem_C::CourseId' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, TicketTokenId) == 0x0002C4, "Member 'UAestheShop_TicketListItem_C::TicketTokenId' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, HoldTicketTokenAmount) == 0x0002C8, "Member 'UAestheShop_TicketListItem_C::HoldTicketTokenAmount' has a wrong offset!");
static_assert(offsetof(UAestheShop_TicketListItem_C, OnSelected) == 0x0002D0, "Member 'UAestheShop_TicketListItem_C::OnSelected' has a wrong offset!");

}

