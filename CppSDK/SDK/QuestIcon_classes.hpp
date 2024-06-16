#pragma once

 

// Package: QuestIcon

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass QuestIcon.QuestIcon_C
// 0x0008 (0x0280 - 0x0278)
class UQuestIcon_C final : public UUserWidget
{
public:
	class UImage*                                 IconImage;                                         // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetIconZOrder(const TMap<EQuestStatus, ESBMiniMapIconType>& IconTypeList, EQuestStatus Status);
	void SetIconTexture(const TMap<EQuestStatus, class UTexture2D*>& TextureList, const EQuestStatus& Status);
	void SetQuestIcon(int32 QuestID);
	void SetQuestIconClosed();
	void SetQuestIconQuestion();
	void SetIconByQuestIndex_ForInteractableEventPoint(int32 QuestIndex, bool bQuestionMark);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"QuestIcon_C">();
	}
	static class UQuestIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UQuestIcon_C>();
	}
};
static_assert(alignof(UQuestIcon_C) == 0x000008, "Wrong alignment on UQuestIcon_C");
static_assert(sizeof(UQuestIcon_C) == 0x000280, "Wrong size on UQuestIcon_C");
static_assert(offsetof(UQuestIcon_C, IconImage) == 0x000278, "Member 'UQuestIcon_C::IconImage' has a wrong offset!");

}

