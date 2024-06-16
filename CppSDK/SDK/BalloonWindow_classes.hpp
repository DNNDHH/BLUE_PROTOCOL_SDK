#pragma once

 

// Package: BalloonWindow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BalloonWindow.BalloonWindow_C
// 0x0058 (0x02E8 - 0x0290)
class UBalloonWindow_C final : public USBBalloonWindow
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0290(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimOut;                                           // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimIn;                                            // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                           CanvasPanel_0;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 FaceIcon;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBox_0;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRichTextBlock*                       TextBox;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         DistanceThreshold;                                 // 0x02C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F8E[0x4];                                     // 0x02CC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 AttachActor;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                             AttachCharacter;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   AttachTransformName;                               // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BalloonWindow(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void OnDestruct();
	void SetText(const struct FSBBalloonWindowRequest& SBBalloonWindowRequest);
	void GetFaceCaptureComponent(class USceneCaptureComponent2D** Component);
	void OnTick();
	void OnShow(const struct FSBBalloonWindowRequest& InRequest);
	void PlayAnimIn();
	void PlayAnimOut();

	struct FVector2D AdjustPosition(const struct FVector2D& Position, bool* Result) const;
	struct FVector GetBasePosition() const;
	void CheckDistanceLimit(bool* Result) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BalloonWindow_C">();
	}
	static class UBalloonWindow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBalloonWindow_C>();
	}
};
static_assert(alignof(UBalloonWindow_C) == 0x000008, "Wrong alignment on UBalloonWindow_C");
static_assert(sizeof(UBalloonWindow_C) == 0x0002E8, "Wrong size on UBalloonWindow_C");
static_assert(offsetof(UBalloonWindow_C, UberGraphFrame) == 0x000290, "Member 'UBalloonWindow_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, AnimOut) == 0x000298, "Member 'UBalloonWindow_C::AnimOut' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, AnimIn) == 0x0002A0, "Member 'UBalloonWindow_C::AnimIn' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, CanvasPanel_0) == 0x0002A8, "Member 'UBalloonWindow_C::CanvasPanel_0' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, FaceIcon) == 0x0002B0, "Member 'UBalloonWindow_C::FaceIcon' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, HorizontalBox_0) == 0x0002B8, "Member 'UBalloonWindow_C::HorizontalBox_0' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, TextBox) == 0x0002C0, "Member 'UBalloonWindow_C::TextBox' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, DistanceThreshold) == 0x0002C8, "Member 'UBalloonWindow_C::DistanceThreshold' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, AttachActor) == 0x0002D0, "Member 'UBalloonWindow_C::AttachActor' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, AttachCharacter) == 0x0002D8, "Member 'UBalloonWindow_C::AttachCharacter' has a wrong offset!");
static_assert(offsetof(UBalloonWindow_C, AttachTransformName) == 0x0002E0, "Member 'UBalloonWindow_C::AttachTransformName' has a wrong offset!");

}

