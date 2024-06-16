#pragma once

 

// Package: TelopStar

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass TelopStar.TelopStar_C
// 0x0038 (0x02B0 - 0x0278)
class UTelopStar_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Glow;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       In;                                                // 0x0288(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 ActiveStar;                                        // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 GlowStar;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_             EndAnim;                                           // 0x02A0(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

public:
	void EndAnim__DelegateSignature();
	void ExecuteUbergraph_TelopStar(int32 EntryPoint);
	void OnAnimationFinished(const class UWidgetAnimation* Animation);
	void PreConstruct(bool IsDesignTime);
	void SetActive(bool IsActive);
	void PlayAnimIn();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TelopStar_C">();
	}
	static class UTelopStar_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTelopStar_C>();
	}
};
static_assert(alignof(UTelopStar_C) == 0x000008, "Wrong alignment on UTelopStar_C");
static_assert(sizeof(UTelopStar_C) == 0x0002B0, "Wrong size on UTelopStar_C");
static_assert(offsetof(UTelopStar_C, UberGraphFrame) == 0x000278, "Member 'UTelopStar_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UTelopStar_C, Glow) == 0x000280, "Member 'UTelopStar_C::Glow' has a wrong offset!");
static_assert(offsetof(UTelopStar_C, In) == 0x000288, "Member 'UTelopStar_C::In' has a wrong offset!");
static_assert(offsetof(UTelopStar_C, ActiveStar) == 0x000290, "Member 'UTelopStar_C::ActiveStar' has a wrong offset!");
static_assert(offsetof(UTelopStar_C, GlowStar) == 0x000298, "Member 'UTelopStar_C::GlowStar' has a wrong offset!");
static_assert(offsetof(UTelopStar_C, EndAnim) == 0x0002A0, "Member 'UTelopStar_C::EndAnim' has a wrong offset!");

}

