#pragma once

 

// Package: SystemMessage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SystemMessage.SystemMessage_C
// 0x00A0 (0x0360 - 0x02C0)
class USystemMessage_C final : public USBSystemMessage
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimInOut_long;                                    // 0x02C8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       AnimInOut;                                         // 0x02D0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           Canvas_SystemMessage;                              // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           MessageGrp;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             Text_Message;                                      // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBox_0;                                     // 0x02F8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                   Message;                                           // 0x0300(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_             OnEndMessage;                                      // 0x0318(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          NewVar_0;                                          // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_70B5[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector2D                              DefaultPosition;                                   // 0x032C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LowerPosition;                                     // 0x0334(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              DefaultAnchor;                                     // 0x033C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              LowerAnchor;                                       // 0x0344(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_70B6[0x4];                                     // 0x034C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidgetAnimation*                       FadeAnimation;                                     // 0x0350(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkipMode;                                        // 0x0358(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSkipped;                                         // 0x0359(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsSentEndMessage;                                  // 0x035A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bThisDeletedEndAnim;                               // 0x035B(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bEndAfter;                                         // 0x035C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          bDoNotSkip;                                        // 0x035D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void OnEndMessage__DelegateSignature();
	void ExecuteUbergraph_SystemMessage(int32 EntryPoint);
	void SetDoNotSkip(bool Param_bDoNotSkip);
	void Construct();
	void EndMessage();
	void TryEnd();
	void StartMessage(const class FText& Param_Message);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Destruct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetSkipMessage(bool Param_IsSkipMode);
	void OnPlayCloseSE();
	void IsShowRequestLeft();
	void SetToDefaultPosition();
	void SetToLowerPosition();
	void SetThisDeletedEndAnim(bool Param_bThisDeletedEndAnim);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SystemMessage_C">();
	}
	static class USystemMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USystemMessage_C>();
	}
};
static_assert(alignof(USystemMessage_C) == 0x000008, "Wrong alignment on USystemMessage_C");
static_assert(sizeof(USystemMessage_C) == 0x000360, "Wrong size on USystemMessage_C");
static_assert(offsetof(USystemMessage_C, UberGraphFrame) == 0x0002C0, "Member 'USystemMessage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, AnimInOut_long) == 0x0002C8, "Member 'USystemMessage_C::AnimInOut_long' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, AnimInOut) == 0x0002D0, "Member 'USystemMessage_C::AnimInOut' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, BG) == 0x0002D8, "Member 'USystemMessage_C::BG' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, Canvas_SystemMessage) == 0x0002E0, "Member 'USystemMessage_C::Canvas_SystemMessage' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, MessageGrp) == 0x0002E8, "Member 'USystemMessage_C::MessageGrp' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, Text_Message) == 0x0002F0, "Member 'USystemMessage_C::Text_Message' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, VerticalBox_0) == 0x0002F8, "Member 'USystemMessage_C::VerticalBox_0' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, Message) == 0x000300, "Member 'USystemMessage_C::Message' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, OnEndMessage) == 0x000318, "Member 'USystemMessage_C::OnEndMessage' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, NewVar_0) == 0x000328, "Member 'USystemMessage_C::NewVar_0' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, DefaultPosition) == 0x00032C, "Member 'USystemMessage_C::DefaultPosition' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, LowerPosition) == 0x000334, "Member 'USystemMessage_C::LowerPosition' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, DefaultAnchor) == 0x00033C, "Member 'USystemMessage_C::DefaultAnchor' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, LowerAnchor) == 0x000344, "Member 'USystemMessage_C::LowerAnchor' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, FadeAnimation) == 0x000350, "Member 'USystemMessage_C::FadeAnimation' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, IsSkipMode) == 0x000358, "Member 'USystemMessage_C::IsSkipMode' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, IsSkipped) == 0x000359, "Member 'USystemMessage_C::IsSkipped' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, IsSentEndMessage) == 0x00035A, "Member 'USystemMessage_C::IsSentEndMessage' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, bThisDeletedEndAnim) == 0x00035B, "Member 'USystemMessage_C::bThisDeletedEndAnim' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, bEndAfter) == 0x00035C, "Member 'USystemMessage_C::bEndAfter' has a wrong offset!");
static_assert(offsetof(USystemMessage_C, bDoNotSkip) == 0x00035D, "Member 'USystemMessage_C::bDoNotSkip' has a wrong offset!");

}

