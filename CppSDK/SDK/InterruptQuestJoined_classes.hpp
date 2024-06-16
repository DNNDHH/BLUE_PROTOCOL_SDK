#pragma once

 

// Package: InterruptQuestJoined

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass InterruptQuestJoined.InterruptQuestJoined_C
// 0x0048 (0x02C0 - 0x0278)
class UInterruptQuestJoined_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 BgImage;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLight;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine1;                                        // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageLine2;                                        // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           LineImages;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                         BlurTimeElapsed;                                   // 0x02B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlurTime;                                          // 0x02B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   QuestID;                                           // 0x02B8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_InterruptQuestJoined(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"InterruptQuestJoined_C">();
	}
	static class UInterruptQuestJoined_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UInterruptQuestJoined_C>();
	}
};
static_assert(alignof(UInterruptQuestJoined_C) == 0x000008, "Wrong alignment on UInterruptQuestJoined_C");
static_assert(sizeof(UInterruptQuestJoined_C) == 0x0002C0, "Wrong size on UInterruptQuestJoined_C");
static_assert(offsetof(UInterruptQuestJoined_C, UberGraphFrame) == 0x000278, "Member 'UInterruptQuestJoined_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, InOut) == 0x000280, "Member 'UInterruptQuestJoined_C::InOut' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, BgImage) == 0x000288, "Member 'UInterruptQuestJoined_C::BgImage' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, ImageLight) == 0x000290, "Member 'UInterruptQuestJoined_C::ImageLight' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, ImageLine1) == 0x000298, "Member 'UInterruptQuestJoined_C::ImageLine1' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, ImageLine2) == 0x0002A0, "Member 'UInterruptQuestJoined_C::ImageLine2' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, LineImages) == 0x0002A8, "Member 'UInterruptQuestJoined_C::LineImages' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, BlurTimeElapsed) == 0x0002B0, "Member 'UInterruptQuestJoined_C::BlurTimeElapsed' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, BlurTime) == 0x0002B4, "Member 'UInterruptQuestJoined_C::BlurTime' has a wrong offset!");
static_assert(offsetof(UInterruptQuestJoined_C, QuestID) == 0x0002B8, "Member 'UInterruptQuestJoined_C::QuestID' has a wrong offset!");

}

