import type { Config } from '@jest/types';

// Sync object
const config: Config.InitialOptions = {
    roots: ['<rootDir>/src'],
    testMatch: ['**/__tests__/**/*.ts?(x)', '**/?(*.)+(spec|test).ts?(x)'],
    transform: {
        '^.+\\.(ts|tsx)?$': 'ts-jest',
    },
};
export default config;
