#pragma once

 

// Package: IconQuest

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass IconQuest.IconQuest_C
// 0x0028 (0x02D0 - 0x02A8)
class UIconQuest_C final : public USBMapQuestIcon
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UQuestIcon_C*                           InsideIcon;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UQuestIcon_Outside_C*                   OutsideIcon;                                       // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        Root;                                              // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          IsInSide_0;                                        // 0x02C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_IconQuest(int32 EntryPoint);
	void Unbind();
	void Bind();
	void OnAdventurerRankDelegate_Event_0(const int32 InRetCode);
	void Destruct();
	void Construct();
	void UpdateStatus();
	void Setup(int32 QuestIndex);
	void OnSetInside(bool IsInSide);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"IconQuest_C">();
	}
	static class UIconQuest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UIconQuest_C>();
	}
};
static_assert(alignof(UIconQuest_C) == 0x000008, "Wrong alignment on UIconQuest_C");
static_assert(sizeof(UIconQuest_C) == 0x0002D0, "Wrong size on UIconQuest_C");
static_assert(offsetof(UIconQuest_C, UberGraphFrame) == 0x0002A8, "Member 'UIconQuest_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UIconQuest_C, InsideIcon) == 0x0002B0, "Member 'UIconQuest_C::InsideIcon' has a wrong offset!");
static_assert(offsetof(UIconQuest_C, OutsideIcon) == 0x0002B8, "Member 'UIconQuest_C::OutsideIcon' has a wrong offset!");
static_assert(offsetof(UIconQuest_C, Root) == 0x0002C0, "Member 'UIconQuest_C::Root' has a wrong offset!");
static_assert(offsetof(UIconQuest_C, IsInSide_0) == 0x0002C8, "Member 'UIconQuest_C::IsInSide_0' has a wrong offset!");

}

