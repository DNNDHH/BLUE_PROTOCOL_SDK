#pragma once

 

// Package: UMG_MatchingImage_BestScore

#include "Basic.hpp"

#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingImage_BestScore.UMG_MatchingImage_BestScore_C
// 0x0080 (0x02F8 - 0x0278)
class UUMG_MatchingImage_BestScore_C final : public UUserWidget
{
public:
	class USizeBox*                               Box_BestRank;                                      // 0x0278(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClassIcon_C*                           ClassIcon;                                         // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageBronze;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageGold;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageSilver;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitcherTimeScoreTower;                            // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextClearNum;                                      // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextFloorMax;                                      // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextFloorRecord;                                   // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextTimeScore;                                     // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxTimeScore;                              // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                           VerticalBoxTower;                                  // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTexture2D*                             TextureStarGold;                                   // 0x02D8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TextureStarSilver;                                 // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TextureStarBronze;                                 // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                             TextureStarBlank;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void SetBestScore(int32 BestScore, int32 ClearNum, class FName GameContentId, ESBClassType ClassType);
	void SetTime(int32 Time, bool Cleared);
	void SetScore(int32 Score, bool Cleared);
	void SetTower(int32 FloorBest, int32 FloorMax, int32 ClearNum);
	void SetRank(int32 BestScore, ESBClassType ClassType, class FName GameContentId);
	void Pre_Init_Time_Score_Tower(const class FString& GameMode);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingImage_BestScore_C">();
	}
	static class UUMG_MatchingImage_BestScore_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingImage_BestScore_C>();
	}
};
static_assert(alignof(UUMG_MatchingImage_BestScore_C) == 0x000008, "Wrong alignment on UUMG_MatchingImage_BestScore_C");
static_assert(sizeof(UUMG_MatchingImage_BestScore_C) == 0x0002F8, "Wrong size on UUMG_MatchingImage_BestScore_C");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, Box_BestRank) == 0x000278, "Member 'UUMG_MatchingImage_BestScore_C::Box_BestRank' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, ClassIcon) == 0x000280, "Member 'UUMG_MatchingImage_BestScore_C::ClassIcon' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, ImageBronze) == 0x000288, "Member 'UUMG_MatchingImage_BestScore_C::ImageBronze' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, ImageGold) == 0x000290, "Member 'UUMG_MatchingImage_BestScore_C::ImageGold' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, ImageSilver) == 0x000298, "Member 'UUMG_MatchingImage_BestScore_C::ImageSilver' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, SwitcherTimeScoreTower) == 0x0002A0, "Member 'UUMG_MatchingImage_BestScore_C::SwitcherTimeScoreTower' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextClearNum) == 0x0002A8, "Member 'UUMG_MatchingImage_BestScore_C::TextClearNum' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextFloorMax) == 0x0002B0, "Member 'UUMG_MatchingImage_BestScore_C::TextFloorMax' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextFloorRecord) == 0x0002B8, "Member 'UUMG_MatchingImage_BestScore_C::TextFloorRecord' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextTimeScore) == 0x0002C0, "Member 'UUMG_MatchingImage_BestScore_C::TextTimeScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, VerticalBoxTimeScore) == 0x0002C8, "Member 'UUMG_MatchingImage_BestScore_C::VerticalBoxTimeScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, VerticalBoxTower) == 0x0002D0, "Member 'UUMG_MatchingImage_BestScore_C::VerticalBoxTower' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextureStarGold) == 0x0002D8, "Member 'UUMG_MatchingImage_BestScore_C::TextureStarGold' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextureStarSilver) == 0x0002E0, "Member 'UUMG_MatchingImage_BestScore_C::TextureStarSilver' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextureStarBronze) == 0x0002E8, "Member 'UUMG_MatchingImage_BestScore_C::TextureStarBronze' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_BestScore_C, TextureStarBlank) == 0x0002F0, "Member 'UUMG_MatchingImage_BestScore_C::TextureStarBlank' has a wrong offset!");

}

