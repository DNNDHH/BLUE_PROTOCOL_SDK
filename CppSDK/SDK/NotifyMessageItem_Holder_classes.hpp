#pragma once

 

// Package: NotifyMessageItem_Holder

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NotifyMessageItem_Holder.NotifyMessageItem_Holder_C
// 0x0038 (0x02B0 - 0x0278)
class UNotifyMessageItem_Holder_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim2;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       Anim1;                                             // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 AnimationNode;                                     // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinished;                                        // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFinished__DelegateSignature();
	void ExecuteUbergraph_NotifyMessageItem_Holder(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Start();
	void SetContent(class UUserWidget* Widget);
	void GetAnimatedPosition(struct FMargin* Position);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NotifyMessageItem_Holder_C">();
	}
	static class UNotifyMessageItem_Holder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNotifyMessageItem_Holder_C>();
	}
};
static_assert(alignof(UNotifyMessageItem_Holder_C) == 0x000008, "Wrong alignment on UNotifyMessageItem_Holder_C");
static_assert(sizeof(UNotifyMessageItem_Holder_C) == 0x0002B0, "Wrong size on UNotifyMessageItem_Holder_C");
static_assert(offsetof(UNotifyMessageItem_Holder_C, UberGraphFrame) == 0x000278, "Member 'UNotifyMessageItem_Holder_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_Holder_C, Anim2) == 0x000280, "Member 'UNotifyMessageItem_Holder_C::Anim2' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_Holder_C, Anim1) == 0x000288, "Member 'UNotifyMessageItem_Holder_C::Anim1' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_Holder_C, AnimationNode) == 0x000290, "Member 'UNotifyMessageItem_Holder_C::AnimationNode' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_Holder_C, CanvasPanel_0) == 0x000298, "Member 'UNotifyMessageItem_Holder_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UNotifyMessageItem_Holder_C, OnFinished) == 0x0002A0, "Member 'UNotifyMessageItem_Holder_C::OnFinished' has a wrong offset!");

}

