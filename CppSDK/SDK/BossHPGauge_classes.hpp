#pragma once

 

// Package: BossHPGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass BossHPGauge.BossHPGauge_C
// 0x0030 (0x02C8 - 0x0298)
class UBossHPGauge_C final : public USBBossHPGauge
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                 HPCur;                                             // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextLevel;                                         // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                             TextName;                                          // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FLinearColor>                   TextColorList;                                     // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BossHPGauge(int32 EntryPoint);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void SetScreenPositionOffset(const struct FLinearColor& InScreenPositionOffset);
	void SetDepth(const float InDepth);
	void SetLv(int32 Lv);
	void SetName(const class FString& Param_Name);
	void SetColorText(int32 Level);
	void SetColorLV(const struct FSlateColor& InColorAndOpacity);
	void SetColorName(const struct FSlateColor& InColorAndOpacity);
	void OnSetBossCharacter(class ASBEnemyCharacter* InBoss);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BossHPGauge_C">();
	}
	static class UBossHPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBossHPGauge_C>();
	}
};
static_assert(alignof(UBossHPGauge_C) == 0x000008, "Wrong alignment on UBossHPGauge_C");
static_assert(sizeof(UBossHPGauge_C) == 0x0002C8, "Wrong size on UBossHPGauge_C");
static_assert(offsetof(UBossHPGauge_C, UberGraphFrame) == 0x000298, "Member 'UBossHPGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBossHPGauge_C, HPCur) == 0x0002A0, "Member 'UBossHPGauge_C::HPCur' has a wrong offset!");
static_assert(offsetof(UBossHPGauge_C, TextLevel) == 0x0002A8, "Member 'UBossHPGauge_C::TextLevel' has a wrong offset!");
static_assert(offsetof(UBossHPGauge_C, TextName) == 0x0002B0, "Member 'UBossHPGauge_C::TextName' has a wrong offset!");
static_assert(offsetof(UBossHPGauge_C, TextColorList) == 0x0002B8, "Member 'UBossHPGauge_C::TextColorList' has a wrong offset!");

}

