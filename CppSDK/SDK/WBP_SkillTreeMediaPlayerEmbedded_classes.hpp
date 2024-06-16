#pragma once

 

// Package: WBP_SkillTreeMediaPlayerEmbedded

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_SkillTreeMediaPlayerEmbedded.WBP_SkillTreeMediaPlayerEmbedded_C
// 0x0058 (0x02D0 - 0x0278)
class UWBP_SkillTreeMediaPlayerEmbedded_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCmnImageThrobber_C*                    CmnImageThrobber;                                  // 0x0280(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_Movie;                                       // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBinkMediaPlayer*                       BinkMediaPlayer;                                   // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_MediaSoundActor_C*                  SoundActor;                                        // 0x0298(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinish;                                          // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_             OnPlayStart;                                       // 0x02B0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          bFinish;                                           // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_8BF9[0x7];                                     // 0x02C1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMediaSource*                           PlayMediaSource;                                   // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void OnFinish__DelegateSignature();
	void OnPlayStart__DelegateSignature();
	void ExecuteUbergraph_WBP_SkillTreeMediaPlayerEmbedded(int32 EntryPoint);
	void Unbind();
	void TriPlay();
	void Construct();
	void MovieLoadRequest(TSoftObjectPtr<class UObject> Asset);
	void Cancel();
	void BindMediaEvent();
	void FinishFunction();
	void Destruct();
	void CustomEvent_0(const class FString& OpenedUrl);
	void OnLoaded_41AC99C64E613999FD6600A6E8657C13(class UObject* Loaded);
	void Request_Play_Media(TSoftObjectPtr<class UMediaSource> MediaSource, bool* Result);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"WBP_SkillTreeMediaPlayerEmbedded_C">();
	}
	static class UWBP_SkillTreeMediaPlayerEmbedded_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UWBP_SkillTreeMediaPlayerEmbedded_C>();
	}
};
static_assert(alignof(UWBP_SkillTreeMediaPlayerEmbedded_C) == 0x000008, "Wrong alignment on UWBP_SkillTreeMediaPlayerEmbedded_C");
static_assert(sizeof(UWBP_SkillTreeMediaPlayerEmbedded_C) == 0x0002D0, "Wrong size on UWBP_SkillTreeMediaPlayerEmbedded_C");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, UberGraphFrame) == 0x000278, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, CmnImageThrobber) == 0x000280, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::CmnImageThrobber' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, Image_Movie) == 0x000288, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::Image_Movie' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, BinkMediaPlayer) == 0x000290, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::BinkMediaPlayer' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, SoundActor) == 0x000298, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::SoundActor' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, OnFinish) == 0x0002A0, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::OnFinish' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, OnPlayStart) == 0x0002B0, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::OnPlayStart' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, bFinish) == 0x0002C0, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::bFinish' has a wrong offset!");
static_assert(offsetof(UWBP_SkillTreeMediaPlayerEmbedded_C, PlayMediaSource) == 0x0002C8, "Member 'UWBP_SkillTreeMediaPlayerEmbedded_C::PlayMediaSource' has a wrong offset!");

}

