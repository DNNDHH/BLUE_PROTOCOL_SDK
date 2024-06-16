#pragma once

 

// Package: TelopGameOver

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopGameOver.TelopGameOver_C
// 0x0020 (0x0328 - 0x0308)
class UTelopGameOver_C final : public USBTelopBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       InOut;                                             // 0x0310(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USBRuntimeTextBlock*                    Text;                                              // 0x0318(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                          bValidAnimFInished;                                // 0x0320(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_TelopGameOver(int32 EntryPoint);
	void OnPlayAnim();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayAnim();
	void StopAnim();
	void PlayBGM();
	void PlaySE(class UAkAudioEvent* SE);

	bool IsPlayAnim() const;
	class USBRuntimeTextBlock* GetText() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopGameOver_C">();
	}
	static class UTelopGameOver_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopGameOver_C>();
	}
};
static_assert(alignof(UTelopGameOver_C) == 0x000008, "Wrong alignment on UTelopGameOver_C");
static_assert(sizeof(UTelopGameOver_C) == 0x000328, "Wrong size on UTelopGameOver_C");
static_assert(offsetof(UTelopGameOver_C, UberGraphFrame) == 0x000308, "Member 'UTelopGameOver_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopGameOver_C, InOut) == 0x000310, "Member 'UTelopGameOver_C::InOut' has a wrong offset!");
static_assert(offsetof(UTelopGameOver_C, Text) == 0x000318, "Member 'UTelopGameOver_C::Text' has a wrong offset!");
static_assert(offsetof(UTelopGameOver_C, bValidAnimFInished) == 0x000320, "Member 'UTelopGameOver_C::bValidAnimFInished' has a wrong offset!");

}

