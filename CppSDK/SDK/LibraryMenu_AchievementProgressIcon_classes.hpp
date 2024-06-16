#pragma once

 

// Package: LibraryMenu_AchievementProgressIcon

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass LibraryMenu_AchievementProgressIcon.LibraryMenu_AchievementProgressIcon_C
// 0x0028 (0x02A0 - 0x0278)
class ULibraryMenu_AchievementProgressIcon_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAchievementRankIcon_C*                 AchievementRankIcon;                               // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                         HorizontalBoxValue;                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextNum;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                         RankId;                                            // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_LibraryMenu_AchievementProgressIcon(int32 EntryPoint);
	void PreConstruct(bool IsDesignTime);
	void SetParameter(int32 GetCount);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LibraryMenu_AchievementProgressIcon_C">();
	}
	static class ULibraryMenu_AchievementProgressIcon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULibraryMenu_AchievementProgressIcon_C>();
	}
};
static_assert(alignof(ULibraryMenu_AchievementProgressIcon_C) == 0x000008, "Wrong alignment on ULibraryMenu_AchievementProgressIcon_C");
static_assert(sizeof(ULibraryMenu_AchievementProgressIcon_C) == 0x0002A0, "Wrong size on ULibraryMenu_AchievementProgressIcon_C");
static_assert(offsetof(ULibraryMenu_AchievementProgressIcon_C, UberGraphFrame) == 0x000278, "Member 'ULibraryMenu_AchievementProgressIcon_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementProgressIcon_C, AchievementRankIcon) == 0x000280, "Member 'ULibraryMenu_AchievementProgressIcon_C::AchievementRankIcon' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementProgressIcon_C, HorizontalBoxValue) == 0x000288, "Member 'ULibraryMenu_AchievementProgressIcon_C::HorizontalBoxValue' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementProgressIcon_C, TextNum) == 0x000290, "Member 'ULibraryMenu_AchievementProgressIcon_C::TextNum' has a wrong offset!");
static_assert(offsetof(ULibraryMenu_AchievementProgressIcon_C, RankId) == 0x000298, "Member 'ULibraryMenu_AchievementProgressIcon_C::RankId' has a wrong offset!");

}

