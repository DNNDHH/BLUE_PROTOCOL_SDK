﻿#pragma once

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
	 * Class TemplateSequence.TemplateSequence
	 * Size -> 0x00A8 (FullSize[0x0108] - InheritedSize[0x0060])
	 */
	class UTemplateSequence : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0060(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              BoundActorClass[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftClassProperty
		unsigned char                                              BoundPreviewActor[0x28];                                 // 0x0090(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TMap<struct FGuid, class FName>                            BoundActorComponents;                                    // 0x00B8(0x0050) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.CameraAnimationSequence
	 * Size -> 0x0000 (FullSize[0x0108] - InheritedSize[0x0108])
	 */
	class UCameraAnimationSequence : public UTemplateSequence
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakeCameraStandIn
	 * Size -> 0x0868 (FullSize[0x0890] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakeCameraStandIn : public UObject
	{
	public:
		unsigned char                                              UnknownData_S6IU[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FieldOfView;                                             // 0x0030(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bConstrainAspectRatio : 1;                               // 0x0034(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TZVU[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AspectRatio;                                             // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVE5[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPostProcessSettings                                PostProcessSettings;                                     // 0x0040(0x0780) NativeAccessSpecifierPublic
		float                                                      PostProcessBlendWeight;                                  // 0x07C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCameraFilmbackSettings                             Filmback;                                                // 0x07C4(0x000C) NoDestructor, NativeAccessSpecifierPublic
		struct FCameraLensSettings                                 LensSettings;                                            // 0x07D0(0x0018) NoDestructor, NativeAccessSpecifierPublic
		struct FCameraFocusSettings                                FocusSettings;                                           // 0x07E8(0x0058) NativeAccessSpecifierPublic
		float                                                      CurrentFocalLength;                                      // 0x0840(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentAperture;                                         // 0x0844(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CurrentFocusDistance;                                    // 0x0848(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLU3[0x44];                                  // 0x084C(0x0044) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakePattern
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakePattern : public UCameraShakePattern
	{
	public:
		class UCameraAnimationSequence*                            Sequence;                                                // 0x0028(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PlayRate;                                                // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Scale;                                                   // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendInTime;                                             // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlendOutTime;                                            // 0x003C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RandomSegmentDuration;                                   // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRandomSegment;                                          // 0x0044(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GB2D[0x3];                                   // 0x0045(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USequenceCameraShakeSequencePlayer*                  Player;                                                  // 0x0048(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USequenceCameraShakeCameraStandIn*                   CameraStandIn;                                           // 0x0050(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.SequenceCameraShakeSequencePlayer
	 * Size -> 0x0400 (FullSize[0x0428] - InheritedSize[0x0028])
	 */
	class USequenceCameraShakeSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_RK6T[0x2A8];                                 // 0x0028(0x02A8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             BoundObjectOverride;                                     // 0x02D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieSceneSequence*                                 Sequence;                                                // 0x02D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x02E0(0x00E8) Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9QHV[0x60];                                  // 0x03C8(0x0060) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceActor
	 * Size -> 0x0058 (FullSize[0x0280] - InheritedSize[0x0228])
	 */
	class ATemplateSequenceActor : public AActor
	{
	public:
		unsigned char                                              UnknownData_HH6E[0x10];                                  // 0x0228(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneSequencePlaybackSettings                 PlaybackSettings;                                        // 0x0238(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TC25[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTemplateSequencePlayer*                             SequencePlayer;                                          // 0x0250(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     TemplateSequence;                                        // 0x0258(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTemplateSequenceBindingOverrideData                BindingOverride;                                         // 0x0270(0x000C) BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UHMM[0x4];                                   // 0x027C(0x0004) MISSED OFFSET (PADDING)

	public:
		void SetSequence(class UTemplateSequence* InSequence);
		void SetBinding(class AActor* Actor, bool bOverridesDefault);
		class UTemplateSequence* LoadSequence();
		class UTemplateSequencePlayer* GetSequencePlayer();
		class UTemplateSequence* GetSequence();
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePlayer
	 * Size -> 0x0008 (FullSize[0x04F8] - InheritedSize[0x04F0])
	 */
	class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
	{
	public:
		unsigned char                                              UnknownData_HSZP[0x8];                                   // 0x04F0(0x0008) MISSED OFFSET (PADDING)

	public:
		class UTemplateSequencePlayer* CreateTemplateSequencePlayer(class UObject* WorldContextObject, class UTemplateSequence* TemplateSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ATemplateSequenceActor** OutActor);
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSection
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UTemplateSequenceSection : public UMovieSceneSubSection
	{
	public:
		unsigned char                                              UnknownData_UIQW[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FTemplateSectionPropertyScale>               PropertyScales;                                          // 0x0170(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceSystem
	 * Size -> 0x0070 (FullSize[0x00B0] - InheritedSize[0x0040])
	 */
	class UTemplateSequenceSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_EVOX[0x70];                                  // 0x0040(0x0070) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePropertyScalingInstantiatorSystem
	 * Size -> 0x0058 (FullSize[0x0098] - InheritedSize[0x0040])
	 */
	class UTemplateSequencePropertyScalingInstantiatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_8PL8[0x58];                                  // 0x0040(0x0058) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem
	 * Size -> 0x0050 (FullSize[0x0090] - InheritedSize[0x0040])
	 */
	class UTemplateSequencePropertyScalingEvaluatorSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_SW4H[0x50];                                  // 0x0040(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class TemplateSequence.TemplateSequenceTrack
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UTemplateSequenceTrack : public UMovieSceneSubTrack
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
