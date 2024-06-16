#pragma once

 

// Package: PartyMemberInfo_HPGauge

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C
// 0x0080 (0x0318 - 0x0298)
class UPartyMemberInfo_HPGauge_C final : public USBPartyMemberNormalHPGaugeWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0298(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                       BlinkFast;                                         // 0x02A0(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                       blink;                                             // 0x02A8(0x0008)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 HPGauge;                                           // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBg;                                         // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBgRespawn;                                  // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBgShadow;                                   // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPGaugeBlinkFrame;                                 // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPLoss;                                            // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                 HPLossLine;                                        // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                           HPLossSize;                                        // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                              DefaultGaugeSize;                                  // 0x02F0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkHPRate;                                       // 0x02F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkFastAnimSpeedMin;                             // 0x02FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BlinkFastAnimSpeedMax;                             // 0x0300(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrHP;                                            // 0x0304(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHP;                                             // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxHPWithoutResurrectionAdjust;                    // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              GaugeSize;                                         // 0x0310(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_PartyMemberInfo_HPGauge(int32 EntryPoint);
	void OnUpdate(class USBPlayerCharacterParameterComponent* ParameterComponent, int32 InTeamId);
	void OnUpdateAnim(class USBPlayerCharacterParameterComponent* ParameterComponent, int32 InTeamId);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void Update(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber);
	void UpdateHP(class USBPlayerCharacterParameterComponent* CharaParamComp);
	void UpdateIcon(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber);
	void UpdateAnim(class USBPlayerCharacterParameterComponent* CharaParamComp, int32 TeamNumber);
	void SetHP(float InCurrHp, float InMaxHp, float InMaxHPWoAdjust);
	void SetHPGaugeSize();
	void SetHpGaugeWidthRate(float InWidthRate);
	void Get_Enable_Blink_Anim(bool* Param_EnableBlinkAnim);
	void SetVisibleBlinkFrame(bool Visible);
	void PlayAnimBlink();
	void StopAnimBlink();
	void PlayAnimBlinkFast();
	void StopAnimBlinkFast();
	void SetAnimSpeedBlinkFast(float PlaybackSpeed);
	bool IsVIsibleIcon();
	void GetCurrHP(float* OutCurrHP);
	void GetMaxHP(float* OutMaxHP);
	void GetMaxHPWithoutResurrectionAdjust(float* Param_MaxHPWithoutResurrectionAdjust);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PartyMemberInfo_HPGauge_C">();
	}
	static class UPartyMemberInfo_HPGauge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPartyMemberInfo_HPGauge_C>();
	}
};
static_assert(alignof(UPartyMemberInfo_HPGauge_C) == 0x000008, "Wrong alignment on UPartyMemberInfo_HPGauge_C");
static_assert(sizeof(UPartyMemberInfo_HPGauge_C) == 0x000318, "Wrong size on UPartyMemberInfo_HPGauge_C");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, UberGraphFrame) == 0x000298, "Member 'UPartyMemberInfo_HPGauge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, BlinkFast) == 0x0002A0, "Member 'UPartyMemberInfo_HPGauge_C::BlinkFast' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, blink) == 0x0002A8, "Member 'UPartyMemberInfo_HPGauge_C::blink' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPGauge) == 0x0002B0, "Member 'UPartyMemberInfo_HPGauge_C::HPGauge' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPGaugeBg) == 0x0002B8, "Member 'UPartyMemberInfo_HPGauge_C::HPGaugeBg' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPGaugeBgRespawn) == 0x0002C0, "Member 'UPartyMemberInfo_HPGauge_C::HPGaugeBgRespawn' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPGaugeBgShadow) == 0x0002C8, "Member 'UPartyMemberInfo_HPGauge_C::HPGaugeBgShadow' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPGaugeBlinkFrame) == 0x0002D0, "Member 'UPartyMemberInfo_HPGauge_C::HPGaugeBlinkFrame' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPLoss) == 0x0002D8, "Member 'UPartyMemberInfo_HPGauge_C::HPLoss' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPLossLine) == 0x0002E0, "Member 'UPartyMemberInfo_HPGauge_C::HPLossLine' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, HPLossSize) == 0x0002E8, "Member 'UPartyMemberInfo_HPGauge_C::HPLossSize' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, DefaultGaugeSize) == 0x0002F0, "Member 'UPartyMemberInfo_HPGauge_C::DefaultGaugeSize' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, BlinkHPRate) == 0x0002F8, "Member 'UPartyMemberInfo_HPGauge_C::BlinkHPRate' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, BlinkFastAnimSpeedMin) == 0x0002FC, "Member 'UPartyMemberInfo_HPGauge_C::BlinkFastAnimSpeedMin' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, BlinkFastAnimSpeedMax) == 0x000300, "Member 'UPartyMemberInfo_HPGauge_C::BlinkFastAnimSpeedMax' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, CurrHP) == 0x000304, "Member 'UPartyMemberInfo_HPGauge_C::CurrHP' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, MaxHP) == 0x000308, "Member 'UPartyMemberInfo_HPGauge_C::MaxHP' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, MaxHPWithoutResurrectionAdjust) == 0x00030C, "Member 'UPartyMemberInfo_HPGauge_C::MaxHPWithoutResurrectionAdjust' has a wrong offset!");
static_assert(offsetof(UPartyMemberInfo_HPGauge_C, GaugeSize) == 0x000310, "Member 'UPartyMemberInfo_HPGauge_C::GaugeSize' has a wrong offset!");

}

