#pragma once

/**
 * Name: BLUEPROTOCOL-Win64-Shipping
 * Version: 1.6.0
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass PartyMemberInfo_HPGauge.PartyMemberInfo_HPGauge_C
	 * Size -> 0x0080 (FullSize[0x0318] - InheritedSize[0x0298])
	 */
	class UPartyMemberInfo_HPGauge_C : public USBPartyMemberNormalHPGaugeWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0298(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    BlinkFast;                                               // 0x02A0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    blink;                                                   // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              HPGauge;                                                 // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPGaugeBg;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPGaugeBgRespawn;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPGaugeBgShadow;                                         // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPGaugeBlinkFrame;                                       // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPLoss;                                                  // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              HPLossLine;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        HPLossSize;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FVector2D                                           DefaultGaugeSize;                                        // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlinkHPRate;                                             // 0x02F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlinkFastAnimSpeedMin;                                   // 0x02FC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      BlinkFastAnimSpeedMax;                                   // 0x0300(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrHP;                                                  // 0x0304(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHP;                                                   // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxHPWithoutResurrectionAdjust;                          // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           GaugeSize;                                               // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetMaxHPWithoutResurrectionAdjust(float* MaxHPWithoutResurrectionAdjust);
		void GetMaxHP(float* OutMaxHP);
		void GetCurrHP(float* OutCurrHP);
		bool IsVIsibleIcon();
		void SetAnimSpeedBlinkFast(float PlaybackSpeed);
		void StopAnimBlinkFast();
		void PlayAnimBlinkFast();
		void StopAnimBlink();
		void PlayAnimBlink();
		void SetVisibleBlinkFrame(bool Visible);
		void GetEnableBlinkAnim(bool* EnableBlinkAnim);
		void SetHpGaugeWidthRate(float InWidthRate);
		void SetHPGaugeSize();
		void SetHP(float InCurrHp, float InMaxHp, float InMaxHPWoAdjust);
		void UpdateAnim(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber);
		void UpdateIcon(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber);
		void UpdateHP(class USBPlayerCharacterParameterComponent* CharaParamComp);
		void Update(class USBPlayerCharacterParameterComponent* CharaParamComp, int32_t TeamNumber);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void OnUpdateAnim(class USBPlayerCharacterParameterComponent* ParameterComponent, int32_t InTeamId);
		void OnUpdate(class USBPlayerCharacterParameterComponent* ParameterComponent, int32_t InTeamId);
		void ExecuteUbergraph_PartyMemberInfo_HPGauge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
