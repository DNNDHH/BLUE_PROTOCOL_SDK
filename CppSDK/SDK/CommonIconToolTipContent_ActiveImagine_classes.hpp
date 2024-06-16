#pragma once

 

// Package: CommonIconToolTipContent_ActiveImagine

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CommonIconToolTipContent_ActiveImagine.CommonIconToolTipContent_ActiveImagine_C
// 0x01A0 (0x0418 - 0x0278)
class UCommonIconToolTipContent_ActiveImagine_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                             AbilityDesc;                                       // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 BG;                                                // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 ImageIcon;                                         // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             ImagineName;                                       // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    LevelMark;                                         // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             LevelValue;                                        // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 LvSyncMark;                                        // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonIconToolTipContents_BattleImagineSkillInfoParts_C* SkillInfoParts;                                    // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SplitLine02;                                       // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 SplitLine03;                                       // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ToolTipDetailsDateTime_C*          TermLimitDateTimeParts;                            // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_StackB_M_C*                        WBP_StackB_M;                                      // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          InIsImagineIconActive;                             // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1D91[0x7];                                     // 0x02E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UTexture2D>              NowLoadingIconTexture;                             // 0x02E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              WaitLoadIconTexture;                               // 0x0310(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSBMasterImagine                       DirtyImagineMasterData;                            // 0x0338(0x00B0)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSoftObjectPtr<class UTexture2D>              DirtyIconTexture;                                  // 0x03E8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                          UseClassTypeForLevelSync;                          // 0x0410(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ESBClassType                                  ClassTypeForLevelSync;                             // 0x0411(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ForceLevelSyncOff;                                 // 0x0412(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_CommonIconToolTipContent_ActiveImagine(int32 EntryPoint);
	void ImagineIconLoadRequest(const struct FSBMasterImagine& InImagineMaster);
	void ImagineIconLoadRequestCheckStart();
	void ImagineIconLoadStart(TSoftObjectPtr<class UTexture2D> InNowLoadIconTexture);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnLoaded_75FAA63A4F7F639E8E5B87BA9B1E2B54(class UObject* Loaded);
	void SetImagineData(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool Param_InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff);
	void SetImagineLevel(int32 InImagineLv, int32 InClassLevel, int32* OutImagineLv);
	void SetImagineIconActive(bool InIsActive);
	void SetImagineDataBase(const struct FSBMasterImagine& InMasterImagine, const class FString& InUniqueId, bool Param_InIsImagineIconActive, bool InUseClassTypeForLevelSync, ESBClassType InClassTypeForLevelSync, bool IsEffectiveDisplay, bool InForceLevelSyncOff, int32 InClassLevel, int32 InPerkId, int32 InStackBNum, int32 InStackBMax);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CommonIconToolTipContent_ActiveImagine_C">();
	}
	static class UCommonIconToolTipContent_ActiveImagine_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCommonIconToolTipContent_ActiveImagine_C>();
	}
};
static_assert(alignof(UCommonIconToolTipContent_ActiveImagine_C) == 0x000008, "Wrong alignment on UCommonIconToolTipContent_ActiveImagine_C");
static_assert(sizeof(UCommonIconToolTipContent_ActiveImagine_C) == 0x000418, "Wrong size on UCommonIconToolTipContent_ActiveImagine_C");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, UberGraphFrame) == 0x000278, "Member 'UCommonIconToolTipContent_ActiveImagine_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, AbilityDesc) == 0x000280, "Member 'UCommonIconToolTipContent_ActiveImagine_C::AbilityDesc' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, BG) == 0x000288, "Member 'UCommonIconToolTipContent_ActiveImagine_C::BG' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, ImageIcon) == 0x000290, "Member 'UCommonIconToolTipContent_ActiveImagine_C::ImageIcon' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, ImagineName) == 0x000298, "Member 'UCommonIconToolTipContent_ActiveImagine_C::ImagineName' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, LevelMark) == 0x0002A0, "Member 'UCommonIconToolTipContent_ActiveImagine_C::LevelMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, LevelValue) == 0x0002A8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::LevelValue' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, LvSyncMark) == 0x0002B0, "Member 'UCommonIconToolTipContent_ActiveImagine_C::LvSyncMark' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, SkillInfoParts) == 0x0002B8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::SkillInfoParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, SplitLine02) == 0x0002C0, "Member 'UCommonIconToolTipContent_ActiveImagine_C::SplitLine02' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, SplitLine03) == 0x0002C8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::SplitLine03' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, TermLimitDateTimeParts) == 0x0002D0, "Member 'UCommonIconToolTipContent_ActiveImagine_C::TermLimitDateTimeParts' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, WBP_StackB_M) == 0x0002D8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::WBP_StackB_M' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, InIsImagineIconActive) == 0x0002E0, "Member 'UCommonIconToolTipContent_ActiveImagine_C::InIsImagineIconActive' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, NowLoadingIconTexture) == 0x0002E8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::NowLoadingIconTexture' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, WaitLoadIconTexture) == 0x000310, "Member 'UCommonIconToolTipContent_ActiveImagine_C::WaitLoadIconTexture' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, DirtyImagineMasterData) == 0x000338, "Member 'UCommonIconToolTipContent_ActiveImagine_C::DirtyImagineMasterData' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, DirtyIconTexture) == 0x0003E8, "Member 'UCommonIconToolTipContent_ActiveImagine_C::DirtyIconTexture' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, UseClassTypeForLevelSync) == 0x000410, "Member 'UCommonIconToolTipContent_ActiveImagine_C::UseClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, ClassTypeForLevelSync) == 0x000411, "Member 'UCommonIconToolTipContent_ActiveImagine_C::ClassTypeForLevelSync' has a wrong offset!");
static_assert(offsetof(UCommonIconToolTipContent_ActiveImagine_C, ForceLevelSyncOff) == 0x000412, "Member 'UCommonIconToolTipContent_ActiveImagine_C::ForceLevelSyncOff' has a wrong offset!");

}

