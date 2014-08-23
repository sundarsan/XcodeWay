/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEKit/IDEAssistantContext.h>

#import "NSCopying-Protocol.h"

@class DVTFilePath, IDEContainerItem, IDEGroup, IDETemplate, NSArray;

@interface IDETemplateInstantiationContext : IDEAssistantContext <NSCopying>
{
    IDETemplate *_documentTemplate;
    DVTFilePath *_documentFilePath;
    NSArray *_instantiatedItems;
    IDEContainerItem *_primaryInstantiatedItem;
    IDEGroup *_destinationGroup;
    unsigned long long _destinationIndex;
    NSArray *_destinationBuildables;
    NSArray *_templateSections;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSArray *destinationBuildables; // @synthesize destinationBuildables=_destinationBuildables;
@property IDEGroup *destinationGroup; // @synthesize destinationGroup=_destinationGroup;
@property unsigned long long destinationIndex; // @synthesize destinationIndex=_destinationIndex;
@property DVTFilePath *documentFilePath; // @synthesize documentFilePath=_documentFilePath;
@property IDETemplate *documentTemplate; // @synthesize documentTemplate=_documentTemplate;
@property(copy) NSArray *instantiatedItems; // @synthesize instantiatedItems=_instantiatedItems;
- (void)loadAvailableTemplatesOfKind:(id)arg1 navigableItemCoordinator:(id)arg2;
@property IDEContainerItem *primaryInstantiatedItem; // @synthesize primaryInstantiatedItem=_primaryInstantiatedItem;
@property(copy) NSArray *templateSections; // @synthesize templateSections=_templateSections;

@end

