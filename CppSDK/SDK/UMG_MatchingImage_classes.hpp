#pragma once

 

// Package: UMG_MatchingImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"
#include "SkyBlue_structs.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass UMG_MatchingImage.UMG_MatchingImage_C
// 0x0070 (0x02E8 - 0x0278)
class UUMG_MatchingImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                                BorderImage;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingImage_BestScore_C*         UMG_MatchingImage_BestScore;                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_MatchingImage_RecommendedBattleScore_C* UMG_MatchingImage_RecommendedBattleScore;          // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              NowLoadTexture;                                    // 0x0298(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              WaitLoadTexture;                                   // 0x02C0(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_UMG_MatchingImage(int32 EntryPoint);
	void UIIMageAssetLoadCheck();
	void UIImageAssetLoad(TSoftObjectPtr<class UTexture2D> TextureReference);
	void OnLoaded_119447794C1BA6C029376DAB31003374(class UObject* Loaded);
	void SetGameContentID(class FName GameContentId);
	void SetBestScore(int32 Record, int32 ClearCount, ESBClassType ClassType, class FName MapId);
	void SetGameContentId2(const struct FSBMapInfo& HelpModeInfo);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"UMG_MatchingImage_C">();
	}
	static class UUMG_MatchingImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UUMG_MatchingImage_C>();
	}
};
static_assert(alignof(UUMG_MatchingImage_C) == 0x000008, "Wrong alignment on UUMG_MatchingImage_C");
static_assert(sizeof(UUMG_MatchingImage_C) == 0x0002E8, "Wrong size on UUMG_MatchingImage_C");
static_assert(offsetof(UUMG_MatchingImage_C, UberGraphFrame) == 0x000278, "Member 'UUMG_MatchingImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_C, BorderImage) == 0x000280, "Member 'UUMG_MatchingImage_C::BorderImage' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_C, UMG_MatchingImage_BestScore) == 0x000288, "Member 'UUMG_MatchingImage_C::UMG_MatchingImage_BestScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_C, UMG_MatchingImage_RecommendedBattleScore) == 0x000290, "Member 'UUMG_MatchingImage_C::UMG_MatchingImage_RecommendedBattleScore' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_C, NowLoadTexture) == 0x000298, "Member 'UUMG_MatchingImage_C::NowLoadTexture' has a wrong offset!");
static_assert(offsetof(UUMG_MatchingImage_C, WaitLoadTexture) == 0x0002C0, "Member 'UUMG_MatchingImage_C::WaitLoadTexture' has a wrong offset!");

}

