#pragma once

 

// Package: CmnImageThrobber

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass CmnImageThrobber.CmnImageThrobber_C
// 0x0058 (0x02D0 - 0x0278)
class UCmnImageThrobber_C final : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0278(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       Anim;                                              // 0x0280(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 Image_0;                                           // 0x0288(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_1;                                           // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_2;                                           // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_3;                                           // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_4;                                           // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_5;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_6;                                           // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_7;                                           // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 Image_8;                                           // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_CmnImageThrobber(int32 EntryPoint);
	void StopAnim();
	void StartAnim();
	void Construct();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CmnImageThrobber_C">();
	}
	static class UCmnImageThrobber_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCmnImageThrobber_C>();
	}
};
static_assert(alignof(UCmnImageThrobber_C) == 0x000008, "Wrong alignment on UCmnImageThrobber_C");
static_assert(sizeof(UCmnImageThrobber_C) == 0x0002D0, "Wrong size on UCmnImageThrobber_C");
static_assert(offsetof(UCmnImageThrobber_C, UberGraphFrame) == 0x000278, "Member 'UCmnImageThrobber_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Anim) == 0x000280, "Member 'UCmnImageThrobber_C::Anim' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_0) == 0x000288, "Member 'UCmnImageThrobber_C::Image_0' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_1) == 0x000290, "Member 'UCmnImageThrobber_C::Image_1' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_2) == 0x000298, "Member 'UCmnImageThrobber_C::Image_2' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_3) == 0x0002A0, "Member 'UCmnImageThrobber_C::Image_3' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_4) == 0x0002A8, "Member 'UCmnImageThrobber_C::Image_4' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_5) == 0x0002B0, "Member 'UCmnImageThrobber_C::Image_5' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_6) == 0x0002B8, "Member 'UCmnImageThrobber_C::Image_6' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_7) == 0x0002C0, "Member 'UCmnImageThrobber_C::Image_7' has a wrong offset!");
static_assert(offsetof(UCmnImageThrobber_C, Image_8) == 0x0002C8, "Member 'UCmnImageThrobber_C::Image_8' has a wrong offset!");

}

