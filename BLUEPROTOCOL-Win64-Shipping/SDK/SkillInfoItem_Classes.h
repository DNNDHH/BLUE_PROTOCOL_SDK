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
	 * WidgetBlueprintGeneratedClass SkillInfoItem.SkillInfoItem_C
	 * Size -> 0x00B8 (FullSize[0x0340] - InheritedSize[0x0288])
	 */
	class USkillInfoItem_C : public USBSkillInfoItemWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USkillInfoGaugeActive_C*                             GaugeActive1;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoGaugeMainDefHeal_C*                        GaugeDef;                                                // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoGaugeImagine_C*                            GaugeImagine1;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoGaugeImagine_C*                            GaugeImagine2;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoGaugeMainDefHeal_C*                        GaugeMain;                                               // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USkillInfoGaugeSpecial_C*                            GaugeSpecial;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_1;                                               // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_5;                                               // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_6;                                               // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_8;                                               // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_9;                                               // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            SizeBox_10;                                              // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SwitchGaugeType;                                         // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        SkillNameTable;                                          // 0x02F8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		ESBUIKeyConfigAction                                       KeyConfigAction;                                         // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_0NWI[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                KeyText;                                                 // 0x0310(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PrevPercent;                                             // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      StartTime;                                               // 0x032C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bDlegate;                                                // 0x0330(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IPH7[0x7];                                   // 0x0331(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACharacter*                                          PlayerCharacter;                                         // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetSkillInfoItemSize(ESkillActionPosition InSAP, bool* OutIsValid, struct FVector2D* OutSize);
		void SwitchSkillBg(bool bHud, bool bBehind, bool bAnim);
		void SetKeyVisibilityPermanent(bool InIsVisibilityPermanent);
		void GetGaugeSpecial(bool* OutIsValid, class USkillInfoGaugeSpecial_C** OutGaugeSpecial);
		void GetGaugeDef(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeDef);
		void GetGaugeMain(bool* OutIsValid, class USkillInfoGaugeMainDefHeal_C** OutGaugeMain);
		void GetGaugeActive(ESkillActionPosition InGaugeActiveSAP, bool* OutIsValid, class USkillInfoGaugeActive_C** OutGaugeActive);
		void GetGaugeImagine(ESkillActionPosition InGaugeImagineSAP, bool* OutIsVaild, class USkillInfoGaugeImagine_C** OutGaugeImagine);
		void PlayAnimChargeStart();
		void CheckShieldBreak(bool* bCheck);
		void SetEnable(bool bEnabled);
		void SetSwitchGauge();
		void PlayAnimChargeEnd();
		void PlayAnimUse(bool bInit);
		void ReplaceFunctionText(const class FString& InBaseString, class FString* Result);
		void UpdatePercent();
		void InitKeyText();
		void UpdateKeyText();
		void GetSpecialSkillRecastTime(float* MaxTime, float* CurTime);
		void GetRecastTimeBP(float* MaxRecastTime, float* RecastTime, bool* bShowInfo);
		void OnSkillAnimationStartDelegate_Event_1(ESkillActionPosition SkillPosition);
		void UpdateDelegate();
		void UnbindSkillAnimationStartDelegate();
		void Destruct();
		void Construct();
		void CustomEvent_1();
		void PreConstruct(bool IsDesignTime);
		void OnPlayAnimChargeStart();
		void OnPlayAnimChargeEnd();
		void OnUpdatePercent();
		void OnPlayAnimUse(bool Init);
		void CustomEvent_2(bool Result);
		void OnPadSkinChange(ESBPadKeySkinType SkinType);
		void InitKeyTextAndGauge();
		void ExecuteUbergraph_SkillInfoItem(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
