#pragma once

 

// Package: Fang_expedition_DetailFangImage

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass Fang_expedition_DetailFangImage.Fang_expedition_DetailFangImage_C
// 0x0070 (0x02E8 - 0x0278)
class UFang_expedition_DetailFangImage_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       DummyAnimMoveLeft;                                 // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DummyAnimRemove;                                   // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DummyAnimMoveRight;                                // 0x0290(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       DummyAnmAdd;                                       // 0x0298(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_42;                                          // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>              TempTextureRef;                                    // 0x02A8(0x0028)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UTexture2D*                             TempTexture;                                       // 0x02D0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             OnFinishAnimation;                                 // 0x02D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void OnFinishAnimation__DelegateSignature();
	void ExecuteUbergraph_Fang_expedition_DetailFangImage(int32 EntryPoint);
	void FoceRemoveAnim();
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PlayMoveAnim(int32 Type);
	void LoadImage();
	void OnLoaded_B65A1B5649E5906D193D59B0005B2979(class UObject* Loaded);
	void SetTexture(class UTexture2D* Texture);
	void SetTextureRef(TSoftObjectPtr<class UTexture2D> Texture);
	void ResetAnimState();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Fang_expedition_DetailFangImage_C">();
	}
	static class UFang_expedition_DetailFangImage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UFang_expedition_DetailFangImage_C>();
	}
};
static_assert(alignof(UFang_expedition_DetailFangImage_C) == 0x000008, "Wrong alignment on UFang_expedition_DetailFangImage_C");
static_assert(sizeof(UFang_expedition_DetailFangImage_C) == 0x0002E8, "Wrong size on UFang_expedition_DetailFangImage_C");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, UberGraphFrame) == 0x000278, "Member 'UFang_expedition_DetailFangImage_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, DummyAnimMoveLeft) == 0x000280, "Member 'UFang_expedition_DetailFangImage_C::DummyAnimMoveLeft' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, DummyAnimRemove) == 0x000288, "Member 'UFang_expedition_DetailFangImage_C::DummyAnimRemove' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, DummyAnimMoveRight) == 0x000290, "Member 'UFang_expedition_DetailFangImage_C::DummyAnimMoveRight' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, DummyAnmAdd) == 0x000298, "Member 'UFang_expedition_DetailFangImage_C::DummyAnmAdd' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, Image_42) == 0x0002A0, "Member 'UFang_expedition_DetailFangImage_C::Image_42' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, TempTextureRef) == 0x0002A8, "Member 'UFang_expedition_DetailFangImage_C::TempTextureRef' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, TempTexture) == 0x0002D0, "Member 'UFang_expedition_DetailFangImage_C::TempTexture' has a wrong offset!");
static_assert(offsetof(UFang_expedition_DetailFangImage_C, OnFinishAnimation) == 0x0002D8, "Member 'UFang_expedition_DetailFangImage_C::OnFinishAnimation' has a wrong offset!");

}

