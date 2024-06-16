#pragma once

 

// Package: SkillInfoItem

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SkyBlue_structs.hpp"
#include "SkyBlue_classes.hpp"


namespace SDK
{

// WidgetBlueprintGeneratedClass SkillInfoItem.SkillInfoItem_C
// 0x00B8 (0x0340 - 0x0288)
class USkillInfoItem_C final : public USBSkillInfoItemWidget
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0288(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USkillInfoGaugeActive_C*                GaugeActive1;                                      // 0x0290(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeMainDefHeal_C*           GaugeDef;                                          // 0x0298(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeImagine_C*               GaugeImagine1;                                     // 0x02A0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeImagine_C*               GaugeImagine2;                                     // 0x02A8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeMainDefHeal_C*           GaugeMain;                                         // 0x02B0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkillInfoGaugeSpecial_C*               GaugeSpecial;                                      // 0x02B8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_0;                                         // 0x02C0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_4;                                         // 0x02C8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_5;                                         // 0x02D0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_7;                                         // 0x02D8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_8;                                         // 0x02E0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                               SizeBox_9;                                         // 0x02E8(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                        SwitchGaugeType;                                   // 0x02F0(0x0008)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FText>                           SkillNameTable;                                    // 0x02F8(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	ESBUIKeyConfigAction                          KeyConfigAction;                                   // 0x0308(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_66AC[0x7];                                     // 0x0309(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   KeyText;                                           // 0x0310(0x0018)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                         PrevPercent;                                       // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         StartTime;                                         // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          bDlegate;                                          // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_66AD[0x7];                                     // 0x0331(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ACharacter*                             PlayerCharacter;                                   // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_SkillInfoItem(int32 EntryPoint);
	void InitKeyTextAndGauge();
	void OnPadSkinChange(const ESBPadKeySkinType SkinType);
	void CustomEvent_1(bool Result);
	void OnPlayAnimUse(bool Init);
	void OnUpdatePercent();
	void OnPlayAnimChargeEnd();
	void OnPlayAnimChargeStart();
	void PreConstruct(bool IsDesignTime);
	void CustomEvent_0();
	void Construct();
	void Destruct();
	void UnbindSkillAnimationStartDelegate();
	void UpdateDelegate();
	void OnSkillAnimationStartDelegate_Event_0(const ESkillActionPosition SkillPosition);
	void UpdateKeyText();
	void InitKeyText();
	void UpdatePercent();
	void ReplaceFunctionText(const class FString& InBaseString, class FString* Result);
	void PlayAnimUse(bool bInit);
	void PlayAnimChargeEnd();
	void SetSwitchGauge();
	void SetEnable(bool bEnabled);
	void CheckShieldBreak(bool* bCheck);
	void PlayAnimChargeStart();
	void GetGaugeImagine(ESkillActionPosition InGaugeImagineSAP, bool* OutIsVaild, class USkillInfoGaugeImagine_C** OutGaugeImagine);
	void GetGaugeActive(ESkillActionPosition InGaugeActiveSAP, bool* OutIsValid, class USkillInfoGaugeActive_C** OutGaugeActive);
	void GetGaugeMain(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeMain);
	void GetGaugeDef(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeDef);
	void GetGaugeSpecial(bool* OutIsValid, class USkillInfoGaugeSpecial_C** OutGaugeSpecial);
	void SetKeyVisibilityPermanent(bool InIsVisibilityPermanent);
	void SwitchSkillBg(bool bHud, bool bBehind, bool bAnim);
	void GetSkillInfoItemSize(ESkillActionPosition InSAP, bool* OutIsValid, struct FVector2D* OutSize);

	void GetRecastTimeBP(float* MaxRecastTime, float* RecastTime, bool* bShowInfo) const;
	void GetSpecialSkillRecastTime(float* MaxTime, float* CurTime) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"SkillInfoItem_C">();
	}
	static class USkillInfoItem_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<USkillInfoItem_C>();
	}
};
static_assert(alignof(USkillInfoItem_C) == 0x000008, "Wrong alignment on USkillInfoItem_C");
static_assert(sizeof(USkillInfoItem_C) == 0x000340, "Wrong size on USkillInfoItem_C");
static_assert(offsetof(USkillInfoItem_C, UberGraphFrame) == 0x000288, "Member 'USkillInfoItem_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeActive1) == 0x000290, "Member 'USkillInfoItem_C::GaugeActive1' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeDef) == 0x000298, "Member 'USkillInfoItem_C::GaugeDef' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeImagine1) == 0x0002A0, "Member 'USkillInfoItem_C::GaugeImagine1' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeImagine2) == 0x0002A8, "Member 'USkillInfoItem_C::GaugeImagine2' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeMain) == 0x0002B0, "Member 'USkillInfoItem_C::GaugeMain' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, GaugeSpecial) == 0x0002B8, "Member 'USkillInfoItem_C::GaugeSpecial' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_0) == 0x0002C0, "Member 'USkillInfoItem_C::SizeBox_0' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_4) == 0x0002C8, "Member 'USkillInfoItem_C::SizeBox_4' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_5) == 0x0002D0, "Member 'USkillInfoItem_C::SizeBox_5' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_7) == 0x0002D8, "Member 'USkillInfoItem_C::SizeBox_7' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_8) == 0x0002E0, "Member 'USkillInfoItem_C::SizeBox_8' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SizeBox_9) == 0x0002E8, "Member 'USkillInfoItem_C::SizeBox_9' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SwitchGaugeType) == 0x0002F0, "Member 'USkillInfoItem_C::SwitchGaugeType' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, SkillNameTable) == 0x0002F8, "Member 'USkillInfoItem_C::SkillNameTable' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, KeyConfigAction) == 0x000308, "Member 'USkillInfoItem_C::KeyConfigAction' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, KeyText) == 0x000310, "Member 'USkillInfoItem_C::KeyText' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, PrevPercent) == 0x000328, "Member 'USkillInfoItem_C::PrevPercent' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, StartTime) == 0x00032C, "Member 'USkillInfoItem_C::StartTime' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, bDlegate) == 0x000330, "Member 'USkillInfoItem_C::bDlegate' has a wrong offset!");
static_assert(offsetof(USkillInfoItem_C, PlayerCharacter) == 0x000338, "Member 'USkillInfoItem_C::PlayerCharacter' has a wrong offset!");

}

