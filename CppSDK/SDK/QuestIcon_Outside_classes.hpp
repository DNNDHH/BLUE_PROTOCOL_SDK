#pragma once

 

// Package: QuestIcon_Outside

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestIcon_Outside.QuestIcon_Outside_C
// 0x0020 (0x0298 - 0x0278)
class UQuestIcon_Outside_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       AnimCircle;                                        // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CircleAnim;                                        // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 IconImage;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_QuestIcon_Outside(int32 EntryPoint);
	void Construct();
	void SetIconZOrder(const TMap<EQuestStatus, ESBMiniMapIconType>& IconTypeList, const EQuestStatus& Status);
	void SetIconTexture(const TMap<EQuestStatus, class UTexture2D*>& TextureList, const EQuestStatus& Key);
	void SetQuestIcon(int32 QuestID);
	void SetQuestIconClosed();
	void PlayAnim(float StartAtTime, float PlaybackSpeed);
	void PauseAnim();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestIcon_Outside_C">();
	}
	static class UQuestIcon_Outside_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestIcon_Outside_C>();
	}
};
static_assert(alignof(UQuestIcon_Outside_C) == 0x000008, "Wrong alignment on UQuestIcon_Outside_C");
static_assert(sizeof(UQuestIcon_Outside_C) == 0x000298, "Wrong size on UQuestIcon_Outside_C");
static_assert(offsetof(UQuestIcon_Outside_C, UberGraphFrame) == 0x000278, "Member 'UQuestIcon_Outside_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UQuestIcon_Outside_C, AnimCircle) == 0x000280, "Member 'UQuestIcon_Outside_C::AnimCircle' has a wrong offset!");
static_assert(offsetof(UQuestIcon_Outside_C, CircleAnim) == 0x000288, "Member 'UQuestIcon_Outside_C::CircleAnim' has a wrong offset!");
static_assert(offsetof(UQuestIcon_Outside_C, IconImage) == 0x000290, "Member 'UQuestIcon_Outside_C::IconImage' has a wrong offset!");

}

