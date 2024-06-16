#pragma once

 

// Package: AdventurerRank_GuideMessage

#include "Basic.hpp"

#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass AdventurerRank_GuideMessage.AdventurerRank_GuideMessage_C
// 0x0018 (0x02C8 - 0x02B0)
class UAdventurerRank_GuideMessage_C final : public USBUserWidget
{
public:
	class USizeBox*                               SizeBox_Text;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextAdventureBoard;                                // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    TxtNextRank_;                                      // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void SetAdventureBoardName(const class FText& AdventureBoardName);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AdventurerRank_GuideMessage_C">();
	}
	static class UAdventurerRank_GuideMessage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAdventurerRank_GuideMessage_C>();
	}
};
static_assert(alignof(UAdventurerRank_GuideMessage_C) == 0x000008, "Wrong alignment on UAdventurerRank_GuideMessage_C");
static_assert(sizeof(UAdventurerRank_GuideMessage_C) == 0x0002C8, "Wrong size on UAdventurerRank_GuideMessage_C");
static_assert(offsetof(UAdventurerRank_GuideMessage_C, SizeBox_Text) == 0x0002B0, "Member 'UAdventurerRank_GuideMessage_C::SizeBox_Text' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_GuideMessage_C, TextAdventureBoard) == 0x0002B8, "Member 'UAdventurerRank_GuideMessage_C::TextAdventureBoard' has a wrong offset!");
static_assert(offsetof(UAdventurerRank_GuideMessage_C, TxtNextRank_) == 0x0002C0, "Member 'UAdventurerRank_GuideMessage_C::TxtNextRank_' has a wrong offset!");

}

