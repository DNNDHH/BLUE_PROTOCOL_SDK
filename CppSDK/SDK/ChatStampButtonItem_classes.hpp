#pragma once

 

// Package: ChatStampButtonItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass ChatStampButtonItem.ChatStampButtonItem_C
// 0x0060 (0x02D8 - 0x0278)
class UChatStampButtonItem_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonIcon_C*                          CommonIcon;                                        // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           FloatStampPoint;                                   // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBButton_C*                            StampButton;                                       // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         StampId;                                           // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                         Pad_6F5E[0x4];                                     // 0x029C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnSelect;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnSelectRight;                                     // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          IsDragable;                                        // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6F5F[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UChatLogFloatStampIcon_C*               StampWidgetRef;                                    // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsViewLarger;                                      // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsNotPossessed;                                    // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CheckValidStamp;                                   // 0x02D2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	EUIZOrder                                     FloatStampOrder;                                   // 0x02D3(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnSelect__DelegateSignature(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem);
	void OnSelectRight__DelegateSignature(int32 RetStampID, class UChatStampButtonItem_C* InSelectItem);
	void ExecuteUbergraph_ChatStampButtonItem(int32 EntryPoint);
	void BndEvt__StampButton_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
	void OnValidStampDelegate_Event_0(bool bValid, int32 Param_StampId);
	void OnChangeCoolTimeStamp(bool IsCoolTime);
	void Destruct();
	void BndEvt__StampButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void Construct();
	void BndEvt__StampButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void SetStamp(int32 InStampId);
	void SetIconSelected(bool IsSelected);
	void SetDragable(bool InDragable);
	struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
	void SetPressedSoundId(ESystemSE PressedSystemSEId);
	void SetViewLarger(bool InViewLarger);
	void GetFloatStampPoint(struct FVector2D* OutPos);
	void SetLimitedTimeIcon(bool Visible);
	void SetShortcutIcon(const class FString& Param_StampId, bool* IsVisibility);
	void SefFloatStampOrder(EUIZOrder InOrder);
	void GetShortcutItemInfo(struct FShortcutItemInfo* OutShortcutItemInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ChatStampButtonItem_C">();
	}
	static class UChatStampButtonItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UChatStampButtonItem_C>();
	}
};
static_assert(alignof(UChatStampButtonItem_C) == 0x000008, "Wrong alignment on UChatStampButtonItem_C");
static_assert(sizeof(UChatStampButtonItem_C) == 0x0002D8, "Wrong size on UChatStampButtonItem_C");
static_assert(offsetof(UChatStampButtonItem_C, UberGraphFrame) == 0x000278, "Member 'UChatStampButtonItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, CommonIcon) == 0x000280, "Member 'UChatStampButtonItem_C::CommonIcon' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, FloatStampPoint) == 0x000288, "Member 'UChatStampButtonItem_C::FloatStampPoint' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, StampButton) == 0x000290, "Member 'UChatStampButtonItem_C::StampButton' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, StampId) == 0x000298, "Member 'UChatStampButtonItem_C::StampId' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, OnSelect) == 0x0002A0, "Member 'UChatStampButtonItem_C::OnSelect' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, OnSelectRight) == 0x0002B0, "Member 'UChatStampButtonItem_C::OnSelectRight' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, IsDragable) == 0x0002C0, "Member 'UChatStampButtonItem_C::IsDragable' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, StampWidgetRef) == 0x0002C8, "Member 'UChatStampButtonItem_C::StampWidgetRef' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, IsViewLarger) == 0x0002D0, "Member 'UChatStampButtonItem_C::IsViewLarger' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, IsNotPossessed) == 0x0002D1, "Member 'UChatStampButtonItem_C::IsNotPossessed' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, CheckValidStamp) == 0x0002D2, "Member 'UChatStampButtonItem_C::CheckValidStamp' has a wrong offset!");
static_assert(offsetof(UChatStampButtonItem_C, FloatStampOrder) == 0x0002D3, "Member 'UChatStampButtonItem_C::FloatStampOrder' has a wrong offset!");

}

