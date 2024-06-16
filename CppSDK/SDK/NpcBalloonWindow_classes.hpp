#pragma once

 

// Package: NpcBalloonWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass NpcBalloonWindow.NpcBalloonWindow_C
// 0x0070 (0x02E8 - 0x0278)
class UNpcBalloonWindow_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Bg1;                                               // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Bg2;                                               // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TextBox;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsHide;                                            // 0x02B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9A[0x7];                                     // 0x02B1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 AttachActor;                                       // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             AttachCharacter;                                   // 0x02C0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttachTransformName;                               // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DistanceThreshold;                                 // 0x02D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bRoundPosition;                                    // 0x02D4(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bHiding;                                           // 0x02D5(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5B9B[0x2];                                     // 0x02D6(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             OnRemove;                                          // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnRemove__DelegateSignature();
	void ExecuteUbergraph_NpcBalloonWindow(int32 EntryPoint);
	void Destruct();
	void UIVisibleSettingChangeDelegate_Event_0(ESBUIType InUIType, bool bInVisibility, bool bInInstantly);
	void Construct();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Hide();
	void Show(const class FText& Message, class ACharacter* Param_AttachCharacter, const class FName& Param_AttachTransformName, float AutoCloseTime);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);

	struct FVector2D AdjustPosition(const struct FVector2D& Position, bool* Result) const;
	struct FVector GetBasePosition() const;
	void CheckDistanceLimit(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"NpcBalloonWindow_C">();
	}
	static class UNpcBalloonWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UNpcBalloonWindow_C>();
	}
};
static_assert(alignof(UNpcBalloonWindow_C) == 0x000008, "Wrong alignment on UNpcBalloonWindow_C");
static_assert(sizeof(UNpcBalloonWindow_C) == 0x0002E8, "Wrong size on UNpcBalloonWindow_C");
static_assert(offsetof(UNpcBalloonWindow_C, UberGraphFrame) == 0x000278, "Member 'UNpcBalloonWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, AnimOut) == 0x000280, "Member 'UNpcBalloonWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, AnimIn) == 0x000288, "Member 'UNpcBalloonWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, Bg1) == 0x000290, "Member 'UNpcBalloonWindow_C::Bg1' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, Bg2) == 0x000298, "Member 'UNpcBalloonWindow_C::Bg2' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, CanvasPanel_0) == 0x0002A0, "Member 'UNpcBalloonWindow_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, TextBox) == 0x0002A8, "Member 'UNpcBalloonWindow_C::TextBox' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, IsHide) == 0x0002B0, "Member 'UNpcBalloonWindow_C::IsHide' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, AttachActor) == 0x0002B8, "Member 'UNpcBalloonWindow_C::AttachActor' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, AttachCharacter) == 0x0002C0, "Member 'UNpcBalloonWindow_C::AttachCharacter' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, AttachTransformName) == 0x0002C8, "Member 'UNpcBalloonWindow_C::AttachTransformName' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, DistanceThreshold) == 0x0002D0, "Member 'UNpcBalloonWindow_C::DistanceThreshold' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, bRoundPosition) == 0x0002D4, "Member 'UNpcBalloonWindow_C::bRoundPosition' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, bHiding) == 0x0002D5, "Member 'UNpcBalloonWindow_C::bHiding' has a wrong offset!");
static_assert(offsetof(UNpcBalloonWindow_C, OnRemove) == 0x0002D8, "Member 'UNpcBalloonWindow_C::OnRemove' has a wrong offset!");

}

